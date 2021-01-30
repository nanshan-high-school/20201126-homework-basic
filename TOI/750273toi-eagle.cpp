#include <iostream>
using namespace std;

int main() {
    int N, M, eagle;
    cin >> N;
    
    int chicken[N];
    for (int i = 0; i < N; i++) {
        cin >> chicken[i];
    }

    cin >> eagle;
    cin >> M;
    
    int kill[M];
    for (int i = 0; i < M; i++) {
        cin >> kill[i];
    }
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (chicken[j] == kill[i]) {
                chicken[j] = eagle;
                eagle = kill[i];
            }  
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << chicken[i] << " ";
    }
}
