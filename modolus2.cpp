#include<iostream>
using namespace std;
int main(){
    long long int N;
    cin>>N;
    int d;
    cin>>d;
    int count=0;
    while(N!=0){
        int r=N%10;
        if(d==r){
            count=count+1;
        }
        N=N/10;
    }
    cout<<count;
    return 0;
}