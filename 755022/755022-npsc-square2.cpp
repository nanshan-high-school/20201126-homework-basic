#include <iostream>
using namespace std;
int main() {
    long long size, sum = 0;
    bool t = false, alp = true;
    cin >> size;
    long long n[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> n[i][j];
        }
    }
    for (int i = 0; i < size && alp; i++) {
        for (int j = 0; j < size; j++) {
            if (n[i][j] > 0 && n[j][i] > 0 && n[i][j] != n[j][i]) {
                alp = false;
                break;
            }
            if (n[i][j] < 0) {
                alp = false;
                t = true;
                break;
            }

        }
    }
    if (alp) {
        cout << '0' << endl;
        return 0;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (n[i][j] > 0 && n[j][i] > 0 && n[i][j] != n[j][i]) {
                t = false;
                break;
            }
            if (n[i][j] > 9 || n[i][j] < -1 || n[i][j] == 0) {
                t = false;
                break;
            }
        }
    }
    if (t == false) {
        cout << "-1" << endl;
        return 0;
    } else {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (n[i][j] < 0) {
                    if (i == j) {
                        n[i][j] = 1;
                        sum++;
                    } else if (n[i][j] < 0 && n[j][i] < 0) {
                        n[i][j] = 1;
                        n[j][i] = 1;
                        sum += 2;
                    } else {
                        n[i][j] = n[j][i];
                        sum += n[j][i];
                    }
                }
            }
        }
        cout << sum << endl;
        return 0;
    }
}
