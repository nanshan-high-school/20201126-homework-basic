#include <iostream>
using namespace std;
int main() {
	long long a[3][3], b1, b2, c = 0;
	string num;
	for (int m = 0; m < 3; m++) {
		for (int n = 0; n < 3; n++) {
			cin >> num;
			if (num == "X") {
				b1 = m;
				b2 = n;
				a[m][n] = 0;
			}
			else {
				if (num == "1") {
					a[m][n] = 1;
				}
				else if (num == "2") {
					a[m][n] = 2;
				}
				else if (num == "3") {
					a[m][n] = 3;
				}
				else if (num == "4") {
					a[m][n] = 4;
				}
				else if (num == "5") {
					a[m][n] = 5;
				}
				else if (num == "6") {
					a[m][n] = 6;
				}
				else if (num == "7") {
					a[m][n] = 7;
				}
				else if (num == "8") {
					a[m][n] = 8;
				}
				else {
					a[m][n] = 9;
				}
			}
		}
		cout << "\n";
	}
	for (int i = 1; i < 10; i++) {
		a[b1][b2] = i;
		if (a[0][0] + a[1][1] + a[2][2] == a[0][2] + a[1][1] +a[2][0] == a[0][1] + a[1][1] + a[2][1] == a[1][0] + a[1][1] + a[1][2]) {
			cout << "Yes";
			c = 1;
			continue;
		}
	}
	if (c == 0) {
		cout << "No";
	}
}
