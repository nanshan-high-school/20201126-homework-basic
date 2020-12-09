#include <iostream>
#include <cmath>
#include <random>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int y = (n + 1) / 2;
    int x_min[k];
    int x_max[k];
    int x_ans[k];
    string ans;
    int correct = 0;

    for (int i = 0; i < k ;i++) {
        x_max[i] = n;
        x_min[i] = 0;
        x_ans[i] = -1;
    }

    while (correct < k) {
        cout << y;
        int n_y;

        for (int i = 0; i < k; i++) {
            cin >> ans;
            if (x_ans[i] != -1) {
                continue;
            } else if (ans == "yes" && y > x_min[i]) {
                x_min[i] = y;
            } else if (ans == "no" && y < x_max[i]){
                x_max[i] = y;
            }

            if (x_max[i] - x_min[i] == 1) {
                correct += 1;
                x_ans[i] = x_max[i];
            } else {
                n_y = (x_max[i] + x_min[i]) / 2;
            }
        }
        y = n_y;
    }
    for (int i = 0; i < k; i++) {
        cout << x_ans[i] << "\n";
    }
}

