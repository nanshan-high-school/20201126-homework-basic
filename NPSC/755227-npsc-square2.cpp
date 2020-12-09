#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int N[n][n];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> N[i][j];
        }
    }

    int spacePlus = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (N[i][j] == -1 || N[j][i] == -1) {
                if (N[i][i] == N[j][j]) {
                    N[i][i] = 1;
                } else {
                    if (N[i][j] > N[j][i]) {
                        N[j][i] = N[i][j];
                    } else {
                        N[i][j] = N[j][i];
                    }
                          
                }
                spacePlus = spacePlus + N[i][j];
            } else if (N[i][j] != N[j][i]) {
                cout << "-1";
                return 0;
            }
        }
    }

    cout << spacePlus;
}
