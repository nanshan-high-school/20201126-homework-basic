#include <iostream>
using namespace std;
int main() {
    int N, S;
    cin >> N >> S;

    int correct[N];
    for (int i = 0; i < N; i++) {
        cin >> correct[i];
    }

    int M;
    cin >> M;
    int answer[M][N] , score[M];
    
    for (int i = 0; i < M; i++) {
        score[i] = 0;        
        for (int j = 0; j < N; j++) {
            cin >> answer[i][j];
            if (answer[i][j] == correct[j]) {
                score[i] += 1;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        cout << score[i] * S << "\n";
    }
}
