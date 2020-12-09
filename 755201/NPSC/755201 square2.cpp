#include <iostream>
using namespace std;
int main() {
    long long size, sum = 0;
    bool t = false, alp = true;
    cin >> size;
    long long n[size][size];
    for (int m = 0; m < size; m++) {
        for (int j = 0; j < size; j++) {
            cin >> n[m][j];
        }
    }
    for (int m = 0; m < size && alp; m++) {
        for (int j = 0; j < size; j++) {
            if (n[m][j] > 0 && n[j][m] > 0 && n[m][j] != n[j][m]) {
                alp = false;
                break;
            }
            if (n[m][j] < 0) {
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

    
    for (int m = 0; m < size; m++) {
        for (int j = 0; j < size; j++) {
            if (n[m][j] > 0 && n[j][m] > 0 && n[m][j] != n[j][m]) {
                t = false;
                break;
            }
            if (n[m][j] > 9 || n[m][j] < -1 || n[m][j] == 0) {
                t = false;
                break;
            }
        }
    }
    
    
    if (t == false) {
        cout << "-1" << endl;
        return 0;
    } else {
        for (int m = 0; m < size; m++) {
            for (int j = 0; j < size; j++) {
                if (n[m][j] < 0) {
                    if (m == j) {
                        n[m][j] = 1;
                        sum++;
                    } else if (n[m][j] < 0 && n[j][m] < 0) {
                        n[m][j] = 1;
                        n[j][m] = 1;
                        sum += 2;
                    } else {
                        n[m][j] = n[j][m];
                        sum += n[j][m];
                    }
                }
            }
        }
        cout << sum << endl;
        return 0;
    }
}
