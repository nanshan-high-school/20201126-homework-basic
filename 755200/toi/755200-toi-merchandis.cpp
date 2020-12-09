#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N, temp, firstsec = -1;
    cin >> N;
    int sells[N], id[N];
    //sells = 銷量，id = 編號 (-1 為隔板)
    for (int i = 0; i < N; i++) {
        cin >> sells[i];
        if (sells[i] == -1 && firstsec == -1) {
            firstsec = i;
        }
    }
    int maxId = firstsec + 1, minId = firstsec + 1;
    for (int i = 0; i < N; i++) {
        cin >> id[i];
    }
    for (int i = firstsec + 1; i < N; i++) {
        if (sells[i] == -1) {
            temp = id[maxId];
            id[maxId] = id[minId];
            id[minId] = temp;
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
    for (int i = 0; i < N; i++) {
        cout << id[i] << " ";
    }

}