#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
//
//取範圍整數公式: ( rand() % (最大值-最小值+1) ) + 最小值
//

int main() {
    int Max = 1000, min = 1;
    string num;
    bool bYes = false;
    int a = 0;
    int i=0;
    int yNum;
    //
    cout << "輸入心中數字: ";
    cin >> yNum;
    //二分法
    a=500;
    while (not bYes) {
        i++;
        a = (Max + min)/2;
        //cout << i << "-" << min <<"-" << Max << " => " << a << " ";
        if (yNum == a) {
            break;
        } 
        //
        cin >> num;
        //
        if (num == "h") {
            Max = a;
            //cout << " high";
            //cout << Max <<"-"<< min;
        } else if (num == "l") { //lower
            min = a;
            //cout << Max <<"-"<< min;
        }
        cout << endl;
    }

    //
    /*
    //Rand
    //
    srand(time(NULL));
    a=500;
    while (not bYes) {
        i++;
        //a = ((rand() % (Max - min + 1)) + min);
        cout << i << "-" << min <<"-" << Max << " => " << a << " ";
        cin >> num;
        //
        if (num == "=") {
            break;
        } else if (num == "h") {
            Max = a - 1;
            a = ((rand() % (Max - min + 1)) + min);
            //cout << " high";
            //cout << Max <<"-"<< min;
        } else if (num == "l") { //lower
            min = a + 1;
            a = ((rand() % (Max - min + 1)) + min);
            //cout << Max <<"-"<< min;
        }
        cout << endl;
    }
    */
}
