#include<iostream>
using namespace std;

int power(int x,int n){
    //base case
    if(n<=1){
        return x;
    }

    //rec. case
    x=x*power(x,n-1);
    return x;
}

int main(){
    int N,P;
    cin>>N>>P;
    int answer=power(N,P);
    cout<<answer<<endl;
    return 0;
}
