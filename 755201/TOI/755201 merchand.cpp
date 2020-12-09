#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int A, B, C = -1;
    cin >> A;
    int sells[A], id[A];
    

    for (int i = 0; i < A; i++) {
        cin >> sells[i];
        if (sells[i] == -1 && C == -1) {
            C = i;
        }
    }
    int maxId = C + 1, minId = C + 1;
    for (int i = 0; i < A; i++) {
        cin >> id[i];
    }
    for (int i = C + 1; i < A; i++) {
        if (sells[i] == -1) {
            B = id[maxId];
            id[maxId] = id[minId];
            id[minId] = B;
            maxId = i + 1;
            minId = i + 1;
        } else {
            if (sells[maxId] < sells[i]) {
                maxId = i;
            } else if (sells[minId] > sells[i]) {
                minId = i;
            }
        }
    }
    for (int i = 0; i < A; i++) {
        cout << id[i] << " ";
    }

}
