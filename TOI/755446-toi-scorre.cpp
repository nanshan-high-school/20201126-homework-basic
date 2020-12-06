#include <iostream>
using namespace std;

int main() {
    int N, S, M;
    int stdAns[100][100];
    int ans[20];
    int score[100];
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
            cin >> ans[i];
    }

    cin >> M;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> stdAns[i][j];

            if (stdAns[i][j] == ans[j]) {
                score[i] += S;
            }
        }
    }
    for (int i = 0; i < M; i++) {
        cout << score[i] << "\n";
    }
}
