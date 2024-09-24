#include<iostream>
using namespace std;
int main(){
   long long int N;
    cin>>N;
    int no=0;
    int a=1;
    while(N!=0){
        int r=N%10;
        no=no+(r*a);
        a=2*a;     
        N=N/10;           
    }
    cout<<no;
    return 0;
}