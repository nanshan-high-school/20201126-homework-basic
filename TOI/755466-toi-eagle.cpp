#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int C[N];

    for (int i = 0; i < N; i++) {
        cin >> C[i];//小雞
    }


    int E, Q;
    cin >> E;//老鷹
    cin >> Q;
    int Catch[Q], e[Q];
    for (int i = 0; i < Q; i++) {
        cin >> e[i];//被吃的-->當老鷹
    }
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j <= N; j++) {
            if (e[i] == C[j]) {
                C[j] = E;
                E = e[i];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }

}
