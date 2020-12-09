#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int total[N], empty[N], D = 0, thing = 0;

    while (D < 2 && thing < 1) {
        D = 0;
        thing = 0;
        for (int i = 0; i < N; i++) {
            cin >> total[i];
            if (total[i] > 0) {
                thing ++;
            } else if (total[i] == -1) {
                D ++;
            }
        } 
        for (int i = 0; i < N; i++) {
            cin >> empty[i];
        }
    }

    int i = 0, sum = 0;
    while (i < N) {
        if (total[i] != -1) {
            i += 1;
            sum = i;
            continue;
        }
        do {
            sum ++;
            if (sum >= N) {
                break;
            }
        } while (total[sum] != -1);

        if (sum >= N) {
            break;
        }

        int Maxempty, Maxtotal = -1, Minempty, Mintotal = 101;
        bool Dot = false;
        for (int j = (i + 1); j < sum; j++) {
            if (total[j] > Maxtotal) {
                Maxtotal = total[j];
                Maxempty = j;
            }
            if (total[j] < Mintotal) {
                Mintotal = total[j];
                Minempty = j;
            }
            Dot = true;
        }
        if (Dot == true) {
            int c = empty[Maxempty];
            empty[Maxempty] = empty[Minempty];
            empty[Minempty] = c;
        }
        i = sum;
    }

    for (int i = 0; i < N; i++) {
        cout << empty[i] << " ";
    }
}
