#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string a[3];
	int v[9] = {0}, x = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[i][j] != 88) {
				v[i * 3 + j] = a[i][j] - 48;
			} else {
				x = i * 3 + j;
			}
		}
	}
	for (v[x] = 1; v[x] < 10; v[x]++) {
		int total[8] = {0};
		for (int i = 0; i < 3; i++) {
			total[i] = v[3 * i] + v[3 *i + 1] + v[3 * i + 2];
			total[i + 3] = v[i] + v[i + 3] + v[i + 6];
		}
		total[6] = v[0] + v[4] + v[8];
		total[7] = v[2] + v[4] + v[6];
		for (int i = 0; i < 7; i++) {
			if (total[i] != total[i + 1]) {
				break;
			} else if (i == 6) {
				cout << "Yes";
				return 0;
			}
		}

	}
	cout << "No";
}
