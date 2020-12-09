#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

float A, B;
bool status(float a[], float b[]) {
    bool stat = false;
    for (int i = 0; i < B; i++) {
        if (a[i] != b[i]) {
            stat = true;
            break;
        }
    }
    return stat;
}

int main() {
    cin >> A >> B;
    float y = ceil(A / 2);
    float xMax[(int)B], xMin[(int)B];
    string input;
    
    for (int i = 0; i < B; i++) {
        xMax[i] = A;
        xMin[i] = 1;
    }
    
    while (status(xMax, xMin)) {
        cout << y << flush << endl;
        for (int i = 0; i < B; i++) {
            cin >> input;
            if (input == "Yes") {
                xMax[i] = min(xMax[i], y - 1);
            } else {
                xMin[i] = max(xMin[i], y);
            }
        }
        for (int i = 0; i < B; i++) {
            if (xMax[i] != xMin[i]) {
                y = ceil((xMax[i] + xMin[i]) / 2);
                break;
            }
        }
    }
    for (int i = 0; i < B; i++) {
        cout << xMin[i] << endl;
    }
}
