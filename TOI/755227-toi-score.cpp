#include <iostream>
using namespace std;

int main() {
    int N, S, M;
    cin >> N >> S;
    int ans[N];

    for (int i = 0; i < N; i++) {
        cin >> ans[i];
    }

    cin >> M;
    int stdAns[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> stdAns[i][j];
        }
    }

    int score = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (stdAns[i][j] == ans[j]) {
                score = score + S;
            }
        }
        
        cout << score << "\n";
        score = 0;
    }
}