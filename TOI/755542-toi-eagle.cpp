#include <iostream>
using namespace std;
int main() {
    int N = 0, E = 0, Q = 0;
    
    cin >> N;
    int C[N];
    for (int i = 0; i < N; i++) {
        C[i] = 0;
        cin >> C[i];
    }
    
    cin >> E;
    
    cin >> Q;
    int chicken[Q];
    for (int j = 0; j < Q; j++) {
        chicken[j] = 0;
        cin >> chicken[j];
        for (int k = 0; k < N; k++) {
            if (chicken[j] == C[k]) {
                C[k] = E;
                E = chicken[j];
            }
        }
    }
    for (int l = 0; l < N; l++) {
        cout << C[l] << " ";
    }
}
