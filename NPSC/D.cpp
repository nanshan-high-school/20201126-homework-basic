
#include "random"
#include "iostream"
#include "string.h"
using namespace std;

int main() {

    int flag = 0, counter = 0;
    char line1[3], line2[3], line3[3], root;
    cin >> line1[0] >> line1[1] >> line1[2];
    cin >> line2[0] >> line2[1] >> line2[2];
    cin >> line3[0] >> line3[1] >> line3[2];

    for (int f = 0; f <= 2; ++f) {
        if (line1[f] == 'X') {
            root = line1[f];
            break;
        }
    }


    for (int f = 0; f <= 2; ++f) {
        if (line2[f] == 'X') {
            root = line2[f];
            break;
        }
    }
    for (int f = 0; f <= 2; ++f) {
        if (line3[f] == 'X') {
            root = line3[f];
            break;
        }
    }
    if (line1[0] == root) {
        for (int i = 0; i < 9; ++i) {
            if (i + line1[1] + line1[2] == line2[0] + line2[1] + line2[2] == line3[0] + line3[1] + line3[2]) {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }
    } else if (line1[1] == root) {
        for (int i = 0; i < 9; ++i) {


            if (line1[0] + i + line1[2] == line2[0] + line2[1] + line2[2] == line3[0] + line3[1] + line3[2]) {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }


    } else if (line1[2] == root) {
        for (int i = 0; i < 9; ++i) {
            if (line1[0] + line1[1] + i == line2[0] + line2[1] + line2[2] == line3[0] + line3[1] + line3[2]) {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }

    } else if (line2[0] == root) {
        for (int i = 0; i < 9; ++i) {
            if (line1[0] + line1[1] + line1[2] == i + line2[1] + line2[2] == line3[0] + line3[1] + line3[2]) {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }
    } else if (line2[1] == root) {
        for (int i = 0; i < 9; ++i) {
            if (line1[0] + line1[1] + line1[2] == line2[0] + i + line2[2] == line3[0] + line3[1] + line3[2]) {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }


    } else if (line2[2] == root) {
        for (int i = 0; i < 9; ++i) {
            if (line1[0] + line1[1] + line1[2] == line2[0] + line2[1] + i == line3[0] + line3[1] + line3[2]) {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }
    } else if (line3[0] == root) {
        for (int i = 0; i < 9; ++i) {
            if (line1[0] + line1[1] + line1[2] == line2[0] + line2[1] + line2[2] == i + line3[1] + line3[2]) {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }
    } else if (line3[1] == root) {
        for (int i = 0; i < 9; ++i) {
            if (line1[0] + line1[1] + line1[2] == line2[0] + line2[1] + line2[2] == line3[0] + i + line3[2]) {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }
    } else if (line3[2] == root) {
        for (int i = 0; i < 9; ++i) {
            if (line1[0] + line1[1] + line1[2] == line2[0] + line2[1] + line2[2] == line3[0] + line3[1] + i) {
                cout << "Yes" endl;
                flag = 1;
                break;
            }
        }
    }
    if(flag != 1) {
        cout << "No" << endl;
    }
}
