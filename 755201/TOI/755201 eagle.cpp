#include <iostream>
using namespace std;

int main() {
    int A, B, D;
    cin >> A;
    int C[A];
    for (int i = 0; i < A; i++) {
        cin >> C[i];
    }
    cin >> B;
    cin >> D;
    int eaglelist[D];
    for (int i = 0; i < D; i++) {
        cin >> eaglelist[i];
    }
    for (int i = 0; i < D; i++) {
        for (int j = 0; j <= A; j++) {
            if (eaglelist[i] == C[j]) {
                C[j] = B;
                B = eaglelist[i];
            }
        }
    }
    for (int i = 0; i < A; i++) {
        cout << C[i] << " ";
    }
}
