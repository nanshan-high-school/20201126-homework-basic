#include <iostream>
using namespace std;

int main() {
    int N, S, students;
    cin >> N >> S;
    int correct[N];
    for (int i = 0; i < N; i++) {
        cin >> correct[i];
    }
    cin >> students;
    int answer[students][N];
    int score[students];
    for (int i = 0; i < students; i++) {
        score[i] = 0;
        for (int j = 0; j < N; j++) {
            cin >> answer[i][j];
            if (answer[i][j] == correct[j]) {
                score[i] += S;
            }
        }
    }
    for (int i = 0; i < students; i++) {
        cout << score[i] << endl;
    }
}
