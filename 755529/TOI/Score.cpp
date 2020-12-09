#include <iostream>
using namespace std;

int main() {
    int n, s, m;
    int correct[n];
    int total;

    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> correct[i];
    }
    
    cin >> m;

    for (int i = 0; i < m; i++) {
        total = 0;
        for (int j = 0; j < n; j++) {
            int ans;
            cin >> ans;
            if (ans == correct[j]) {
                total += s;
            }
        }
        cout << total << endl;
    }
}
