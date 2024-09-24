#include<iostream>
using namespace std;

int alexagoesshopping(int arr[100000],int arr1[100000],int n,int i,int co){
   
    for(int a=0; a<n; a++){
        if(arr1[i]>=arr[a] && arr1[i]%arr[a]==0){
            co++;
        }
    }
    return co;
}

int main(){
    long long int n;
    cin>>n;
    int arr[100000];
    long long int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    long long int q;
    cin>>q;
    int arr1[100000];
    int k[100000];
    i=0;
    while(i<q){
        cin>>arr1[i];
        cin>>k[i];
        i++;
    }
    for(i=0; i<q; i++){
        int x = alexagoesshopping(arr,arr1,n,i,0);
        if(x>=k[i]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}