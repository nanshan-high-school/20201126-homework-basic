#include <iostream>
using namespace std;
#include <cmath>
#include <random>
int main() {
    srand(time(NULL));
    int a,b;
    a=int(rand())%100;
    int c=0,d=100;
    do{
      cin>>b;
      if(a>b){
        cout<<d<<"~"<<b+1<<"之間"<<"\n";
        c=b+1;
      }else if(a<b){
        cout<<b+1<<"~"<<c<<"之間"<<"\n";
        d=b+1;
      }else{
        break;
      }
      
  

     
    
    
    }while(a!=b);
    cout<<"good";
}


