#include <iostream>
using namespace std;
int main() {
	int N, S, Q, sum;
	cin >> N >> S;
	int a[N];
	for (int u = 0; u < N; u++) {
		cin >> a[u];
	}
	cin >> Q;
	int b[Q][N];
	for (int i = 0; i < Q; i++) {
		for (int j = 0; j < N; j++){
			cin >> b[i][j];
		}
	}
	for (int p = 0; p < Q; p++) {
		sum = 0;
		for (int o = 0; o < N; o++) {
			if (a[o] == b[p][o]) {
				sum = sum + S;		
			}
		}
		cout << sum << "\n";
	}
}

