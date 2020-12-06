#include "iostream"
using namespace std;

int main() {
    long long N, c[1000], e[1000], Q, getCatch[1000], flag, tmpc, tmpe;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> c[i];
    }
    cin >> e[0];
    cin >> Q;
    for(int i = 0; i < Q; i++) {
        cin >> getCatch[i];
    }
    for(int i = 0; i < Q; i++) {
        for(int j = 0; j < N; j++) {
            if(c[j] == getCatch[i]) {
                tmpc = c[j];
                tmpe = e[i];
                c[j] = tmpe; 
                e[i] = tmpc;
            }
        }
    }
    for(int i = 0; i < N; i++) {
        cout << c[i] << " ";
    } 
}
