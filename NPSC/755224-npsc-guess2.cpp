#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
float N, K;
bool status(float a[], float b[]) {
    bool stat = false;
    for (int i = 0; i < K; i++) {
        if (a[i] != b[i]) {
            stat = true;
            break;
        }
    }
    return stat;
}
int main() {
    cin >> N >> K;
    float y = ceil(N / 2);
    float xMax[(int)K], xMin[(int)K];
    string input;
    for (int i = 0; i < K; i++) {
        xMax[i] = N;
        xMin[i] = 1;
    }
    while (status(xMax, xMin)) {
        cout << y << flush << endl;
        for (int i = 0; i < K; i++) {
            cin >> input;
            if (input == "Yes") {
                xMax[i] = min(xMax[i], y - 1);
            } else {
                xMin[i] = max(xMin[i], y);
            }
        }
        for (int i = 0; i < K; i++) {
            if (xMax[i] != xMin[i]) {
                y = ceil((xMax[i] + xMin[i]) / 2);
                break;
            }
        }
    }
    for (int i = 0; i < K; i++) {
        cout << xMin[i] << endl;
    }
}
