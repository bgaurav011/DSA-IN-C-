#include<iostream>
using namespace std;
int main(){
    long long int N;
    cin>>N;
    int rem;
    long long int a=1;
    long long int N2=0;
    if (N==0){
        N2=5;
    }
    while(N!=0){
        rem=N%10;
        if(rem==0){
            rem=5;
        }
        N2=N2+(rem*a);
        a=10*a;
        N=N/10;
    }
    cout<<N2;
    return 0;
}