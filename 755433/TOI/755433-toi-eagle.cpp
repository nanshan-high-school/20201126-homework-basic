#include <iostream>
using namespace std;

int main() {
    int N; //N小雞總數
    cin >> N;

    int C[N]; //C小雞編號
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    int E; //E老鷹編號
    cin >> E;

    int Q; //Q回合數
    cin >> Q;

    int num[Q]; //num替換的小雞編號
    for (int i = 0; i < Q; i++) {
        cin >> num[i];
    }
    
    int flag = E;
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < N; j++) {
            if (C[j] == num[i]) {
                C[j] = flag;
                flag = num[i];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            cout << C[i];
        } else {
            cout << C[i] << " ";
        }
    }
}
