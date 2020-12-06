
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    long long flag = 0, N, K, y, output[20000],input;
    string answer[20000]; 
    cin >> N >> K;
    input = N/2;
    cout << flush;
    while(true) {
        for (int i = 0; i < K; i++) {
            cin >> answer[i];
        }
        for (int i = 0; i < K; i++) {
            while (answer[i] == "Yes") {
                output[i] = input - 1;
                flag = flag + 1;
            }
        }
        if(flag == K) {
            cout << 0;
            for (int i = 0; i < K; i++) {
                cout << output[i];
                break;
            }
        }else {
            flag = 0;
        }
        input = input/2;
}
    return 0;
}
