#include <iostream>
using namespace std;

int main() {
    int n, s; //試卷題數和每題分數
    int m; //待批改的學生個數
    int total = 0;
   
    cin >> n >> s;

    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cin >> m;

    int num1[n];
    for (int j = 0; j < n; j++) {
        cin >> num1[j];
    }

    for (int k = 0; k < n; k++) {
        if (num[k] == num1[k]) {
            total += s;
        }
    }

    cout << total;
}