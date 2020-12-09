#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num[N];
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    int num1[N];
    for (int i = 0; i < N; i++) {
        cin >> num1[i];
    }

    int i, j, k;
    int s1, s2, n1, n2;
    int MaxI, MaxN, temp;
    int MinI, MinN;

    for (i = 0; i < N; i++) {
        for (i = i; i < N; i++) {
            if (num[i] == -1) {
                s1 = i;
                break;
            }
        }
        for (i = s1 + 1; i < N; i++) {
            if (num[i] == -1) {
                s2 = i;
                i--;
                break;
            }
        }

        if ((s2 - s1) >= 2) {
            MaxI = num[s1 +1];
            MinI = num[s1 +1];
            MaxN = s1 + 1;
            MinN = s1 + 1;
            for (j = s1 +1; j < s2; j++) {
                if (num[j] > MaxI) {
                    MaxI = num[j];
                    MaxN = j;
                }
                if (num[j] < MinI) {
                    MinI = num[j];
                    MinN = j;
                }
            }

            temp = num1[MinN];
            num1[MinN] = num1[MaxN];
            num1[MaxN] = temp;
        }
    }

    for (i = 0; i < N; i++) {
        cout << num1[i] << " ";
    }
    cout << endl;
}
