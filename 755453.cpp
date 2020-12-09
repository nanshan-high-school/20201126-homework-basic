#include <iostream>
using namespace std;
int main() {
    int N,S,M;
    int sc=0;
    cin>>N>>S;
    int K[N],C[N];
    for (int i=0;i<N;i++){
      cin>>K[i];
    }
    cin>>M;
    for(int i=0;i<M;i++){
      for (int j=0;j<N;j++){
        cin>>C[i];
      }
    }
    for(int p=0;p<N;p++){
      if(K[p]==C[p]){
        sc+=1;
      }
    }

    cout<<sc*10;
}