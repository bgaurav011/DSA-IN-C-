#include<iostream>
using namespace std;


void productofarray( long long int arr[],long long int n){
   long long int productall;
   long long int product=1;
   for(int i=0; i<=n-1; i++){
    product=product*arr[i];
   }
   for(int j=0; j<=n-1; j++){
    arr[j]=product/arr[j];
   }
   for(int k=0; k<=n-1; k++){
    cout<<arr[k]<<" ";
   }
}

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    productofarray(arr,n);
    return 0;
}