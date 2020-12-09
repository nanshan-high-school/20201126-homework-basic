#include "iostream"
using namespace std;

int main() {
    int N, S, answer[1000], inputanswer[1000][2000], score[1000];
    cin >> N >> S;
    for(int i = 0; i < N; i++) {
        cin >> answer[i];
    }
    int M;
    cin >> M;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cin >> inputanswer[i][j];
            if(inputanswer[i][j] == answer[j]) {
                score[i] = score[i] + S;
        }
    }
    }
    for(int i = 0; i < M; i++) {
        cout << score[i] << endl;
    }
}
// https://repl.it/@papayaistrash/AfraidSteelblueCylinder#main.cpp
