#include <iostream>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    int Ans[N];

    for (int i = 0; i < N; i++) {
        cin >> Ans[i]; 
    }
    
    int people;
    cin >> people;
    int a[people][N], total[people];

    for (int i = 0; i < people; i++) {
        total[i] = 0;
    }

    for (int i = 0; i < people; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
            if (Ans[j] == a[i][j]) {
                total[i] += S;
            }
        }
    }
    for (int i = 0; i < people; i++) {
        cout << total[i] << "\n";
    }
}