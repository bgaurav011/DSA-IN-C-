#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=n*(n+1)/2;
    int i=1;
    while (i<=n-1){
        int x;
        cin>>x;
        sum=sum-x;
        i=i+1;
    }
    cout<<sum;
    return 0;
    
}