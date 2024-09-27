#include<iostream>
using namespace std;
int main(){
    long long int N;
    cin>>N;
    while(N!=0){
        int r=N%10;
        cout<<r;
        N=N/10;
    }
    return 0;
}