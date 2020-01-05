#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;





int main() {
	int testcase;
	cin >> testcase;
	for (int t = 1; t <= testcase; t++) {
		int x1;
		int y1;
		int x2;
		int y2;

		cin >> x1 >> y1 >> x2 >> y2;
		int a = abs(x2-x1);
		int b = abs(y2-y1);
		int c = abs(a-b);
		if (c%2==0 ) {

		}
		else {
			c = c - 1;
		}
		int answer = a + b + c;
		cout << "#" << t << " " << answer<< endl;

	}



	return 0;
}

