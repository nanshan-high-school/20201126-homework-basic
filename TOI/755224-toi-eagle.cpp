#include <iostream>
using namespace std;

int main() {
    int N, E, Q;
    cin >> N;
    int C[N];
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }
    cin >> E;
    cin >> Q;
    int eaglelist[Q];
    for (int i = 0; i < Q; i++) {
        cin >> eaglelist[i];
    }
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j <= N; j++) {
            if (eaglelist[i] == C[j]) {
                C[j] = E;
                E = eaglelist[i];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }
}
