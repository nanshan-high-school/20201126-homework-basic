#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int C[N];
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    int E;
    cin >> E;

    int Q;
    cin >> Q;

    int catchNum[Q];
    for (int i = 1; i <= Q; i++) {
        cin >> catchNum[i];
    }

    int space;

    for (int i = 1; i <= Q; i++) {
        for (int j = 1; j <= N; j++) {
            if (C[j] == catchNum[i]) {
                space = C[j];
                C[j] = E;
                E = space;
                space = 0;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }
}
