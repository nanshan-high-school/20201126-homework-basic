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

    int std_ans[M][N];
    int score[M];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> std_ans[i][j];
        }
    }

    int flag = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (std_ans[i][j] == ans[j]) {
                flag++;
            }
        }
        score[i] = S * flag;
        flag = 0;
    }

    for (int i = 0; i < M; i++) {
        cout << score[i] << "\n";
    }
}
