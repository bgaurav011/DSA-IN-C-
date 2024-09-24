#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    int i=0;
    while(i<=N-1){
        cin>>arr[i];
        i++;
    }
   int j=0;
   int inversearr[N-1];
   for(i=0;i<=N-1;i++){
        j=arr[i];
        inversearr[j]=i;
   }
   for(j=0;j<=N-1;j++){
    cout<<inversearr[j]<<" ";
   }
    return 0;
}