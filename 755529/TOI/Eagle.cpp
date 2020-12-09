#include <iostream>
using namespace std;

int main() {
    int n, e, q;
    cin >> n ;
    int c[n];

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    cin >> e >> q;

    for (int i = 0; i < q; i++) {
        int get;
        cin >> get;
        for (int j = 0; j < n; j++) {
            if (c[j] == get) {
                c[j] = e;
                e = get;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
}
