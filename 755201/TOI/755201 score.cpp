#include <iostream>
using namespace std;

int main() {
    int TiSu, GiFan, sts;
    cin >> TiSu >> GiFan;
    int ca [TiSu];
    for ( int i = 0; i < TiSu; i++) {
        cin >> ca[i];
    }
    cin >> sts; 
    int ans[sts][TiSu];
    int sco[sts];
    for ( int i = 0; i < sts; i++) {
        sco[i] = 0;
        for ( int j = 0; j < TiSu; j++) {
            cin >> ans[i][j];
            if (ans[i][j] == ca[j]) {
                sco[i] += GiFan;
            }
        }    
    }
    for (int i = 0; i < sts; i++) {
        cout << sco[i] << "\n";
    }

}
