#include <iostream>
using namespace std;

int main() {
    int N, C[10000], E, Q, num[200];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }
    cin >> E;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < N; j++) {
            if (C[j] == num[i]) {
                C[j] = E;
                E = num[i];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }
}
