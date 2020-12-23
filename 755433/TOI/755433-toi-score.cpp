#include <iostream>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;

    int N_answer[N];
    for (int i = 0; i < N; i++) {
        cin >> N_answer[i];
    }

    int stud;
    cin >> stud;
    int stud_A[stud][N], total = 0, score[stud];

    for (int i = 0; i < stud; i++) {
        score[i] = 0;
    }
    for (int i = 0; i < stud; i++) {
        for (int j = 0; j < N; j++) {
            cin >> stud_A[i][j];
            if (N_answer[j] == stud_A[i][j]) {
                score[i] += S;
            }
        }
    }
    for (int i = 0; i < stud; i++) {
        cout << score[i] << "\n";
    }
}
