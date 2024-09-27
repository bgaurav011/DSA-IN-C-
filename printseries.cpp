#include<iostream>
using namespace std;
int main(){
    int N1,N2;
    cin>>N1>>N2;
    int n=1;
    int count=0;
    while(count!=N1){
        int a=3*n+2;
        if(a%N2!=0){
            cout<<a<<endl;
            count++;
        }
        n++;
    }
    return 0;
}