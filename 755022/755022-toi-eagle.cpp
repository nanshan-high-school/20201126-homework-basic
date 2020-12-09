#include <iostream>
using namespace std;
int main() {
    int N = 0;

    cin >> N;
    int C[N];
    for (int i = 0; i < N; i++) {
        C[i] = 0;
        cin >> C[i];
    }

    int E = 0, Q = 0;
    cin >> E;
    cin >> Q;

    int chicken[Q];
    for (int i = 0; i < Q; i++) {
        chicken[i] = 0;
        cin >> chicken[i];
        for (int j = 0; j < N; j++) {
            if (chicken[i] == C[j]) {
                C[j] = E;
                E = chicken[i];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }
}
