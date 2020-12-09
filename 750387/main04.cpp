#include <iostream>
using namespace std;

int main() {
    int n, e, q; //小雞數量;老鷹編號;幾回合

    cin >> n; //輸入小雞數量

    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cin >> e; //一開始扮演老鷹的人的編號
    cin >> q; //經過幾回合的遊戲

    int num1[q];
    for (int i = 0; i < q; i++) {
        cin >> num1[i];
    }

    int temp = 0;
    for (int i = 0; i < q; i++) {  //老鷹
        for (int j = 0; j < n; j++) { //小雞
            if (num1[i] == num[j]) {
                temp = e;
                e = num[j];
                num[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
}