#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sq[n][n];
    bool b = false;
    long long total = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> sq[i][j];
            if(sq[i][j] > 9 || sq[i][j] < -1 || sq[i][j] == 0) {
                cout << -1 << endl;
                b = true;
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (sq[j][i] == sq[i][j]) {
                if (sq[j][i] == -1) {
                    if (i == j) {
                        total += 1;
                    } else {
                        total += 2;
                    }
                }
            } else if (sq[j][i] == -1) {
                total += sq[i][j];
            } else if (sq[i][j] == -1) {
                total += sq[j][i];
            } else {
                cout << -1 << endl;
                b = true;
                break;
            }
        }
        if (b) {
            break;
        }
    }
    if (!b) {
        cout << total << endl;
    }
}
