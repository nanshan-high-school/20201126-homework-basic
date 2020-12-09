#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total[n];
    int no[n];
    int ge = 0;
    int thing = 0;
    
    while (ge < 2 && thing < 1) {
        ge = 0;
        thing = 0;
        for (int i = 0; i < n; i++) {
            cin >> total[i];
            if (total[i] > 0) {
                thing += 1;
            } else if (total[i] == -1) {
                ge += 1;
            }
        } 
        for (int i = 0; i < n; i++) {
            cin >> no[i];
        }
    }

    int i = 0;
    int count = 0;
    while (i < n) {
        if (total[i] != -1) {
            i += 1;
            count = i;
            continue;
        }
        do {
            count += 1;
            if (count >= n) {
                break;
            }
        } while (total[count] != -1);

        if (count >= n) {
            break;
        }

        int max_no;
        int max_total = -1;
        int min_no;
        int min_total = 101;
        bool mod = false;
        for (int j = (i + 1); j < count; j++) {
            if (total[j] > max_total) {
                max_total = total[j];
                max_no = j;
            }
            if (total[j] < min_total) {
                min_total = total[j];
                min_no = j;
            }
            mod = true;
        }
        if (mod == true) {
            int c = no[max_no];
            no[max_no] = no[min_no];
            no[min_no] = c;
        }
        i = count;
    }

    for (int k = 0; k < n; k++) {
        cout << no[k] << " ";
    }
}
