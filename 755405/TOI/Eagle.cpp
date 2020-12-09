#include <iostream>
using namespace std;
int main() {
	int chicknum, ghost, ghost1, round;
	cin >> chicknum;
	int a[chicknum];
	for (int i = 0; i < chicknum; i++) {
		cin >> a[i];
	}
	cin >> ghost;
	cin >> round;
	int b[round];
	for (int j = 0; j < round; j++)	{
		cin >> b[j];
	}
	for (int o = 0; o < round; o++) {
		for (int p = 0; p < chicknum; p++) {
			if (a[p] == b[o]) {
				ghost1 = a[p];
				a[p] = ghost;
				ghost = ghost1;
			}
		}
	}
	for (int y = 0; y < chicknum; y++) {
		cout << a[y] << " ";
	}
}
