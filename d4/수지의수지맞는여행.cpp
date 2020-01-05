#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int map[25][25];
int R;
int C;
int check[25][25] = {0};
int alpha_counter[30] = {0};
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int maxx=0;

void dfs(int now_y,int now_x,int count) {
	if (count > maxx) {
		maxx = count;
	}

	for (int i = 0; i < 4; i++) {
		int next_y = now_y + dy[i];
		int next_x = now_x + dx[i];
		if (next_y >R || next_y <=0 || next_x >C || next_x <= 0) {
			continue;
		}
		if (check[next_y][next_x] ==0) {
			if (alpha_counter[map[next_y][next_x]-'A'] ==0 ) {
				check[next_y][next_x] = 1;
				alpha_counter[(map[next_y][next_x] - 'A')]++;
				dfs(next_y, next_x, count+1);
				check[next_y][next_x] = 0;
				alpha_counter[(map[next_y][next_x] - 'A')]--;


			}
		}



	}



	return;
}



int main() {
	int testcase;
	cin >> testcase;
	
	for (int t = 1; t <= testcase; t++) {
		maxx = 0;
		cin >> R >> C;
		for (int i = 1; i <= R;i++) {
			string ts;
			cin >> ts;
			for (int j = 1; j <= C; j++) {
				map[i][j] = ts[j-1];
			}
		}
		check[1][1]=1;
		alpha_counter[(map[1][1]-'A')]++;
		dfs(1, 1, 1);
		check[1][1]=0;
		alpha_counter[(map[1][1] - 'A')]--;
		
		cout << "#" << t << " " << maxx << endl;
	}

	return 0;
}