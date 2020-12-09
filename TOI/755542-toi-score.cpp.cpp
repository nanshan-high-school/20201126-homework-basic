#include <iostream>
using namespace std;
int main() {
    int N = 0, S = 0, answer_num = 0, answer_std = 0, M = 0;
    
    cin >> N >> S;
    int answer[N]; 
    int score[N];
    for (int m = 0; m < N; m++) {
        score[m] = 0;
    }
    for (int i = 0; i < N; i++) {
        cin >> answer[i];
    }
    cin >> M;

    int answerstd[N][S];
    for (int j = 0; j < M; j++) {
        for (int k = 0; k < N; k++) {
            cin >> answer_std;
            answerstd[j][k] = answer_std;
            answer_std = 0;
            if (answer[k] == answerstd[j][k]) {
                score[j] += S;
            }
        }
    }
    for (int l = 0; l < M; l++) {
        cout << score[l] << "\n";
    }
    return 0;
}
