#include <iostream>
using namespace std;

int main() {
    int size = 0;
    int total = 0;
    int time = 0;
    cin >> size;
    long long arr[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] > 9) {
                cout << "-1" << "\n";
                return 0;
            } else if (arr[i][j] == -1 && arr[j][i] == -1 && (i == j && arr[i][j] == -1)) {
                arr[i][j] = 1;
                arr[j][i] = 1;
                time ++;
            
            }
            
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] == -1) {
                total += arr[j][i];
                time ++;
            }
            
            
        }
    }
    if (time != 0) {
        if (total != 0) {
            cout << total + 3 << "\n";
        } else {
            cout << "-1" << "\n";
        }   
    } else {
        cout << "0";
    }    
}
