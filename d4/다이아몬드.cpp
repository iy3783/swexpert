#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int testcase;
	cin >> testcase;
	for (int t = 1 ; t<=testcase ; t++) {
		int N;
		int K;
		vector<int> diamond;
		cin >> N >> K;
		int max_val = 0;
		for (int i = 1; i <=N ; i++) {
			int tweight;
			cin >> tweight;
			diamond.push_back(tweight);
		}
		sort(diamond.begin(), diamond.end());

		int counter;
		for (int i = 0; i < N;i++) {
			counter = 0;
			for (int j = i; j < N;j++) {
				if (diamond[j] -diamond[i] <=K) {
					counter++;
				}

			}
			if (max_val < counter) {
				max_val = counter;
			}
		}

		cout << "#" << t << " " << max_val << endl;



	}



	return 0;
}