#include<iostream>
using namespace std;
int main(){
    long long N1,N2;
    cin>>N1>>N2;
    int i=1;
    int gcd;
    while(i<=N1 && i<=N2){
        if(N1%i==0 && N2%i==0){
            gcd=i;
        }
        i++;
    }
    cout<<gcd;
}