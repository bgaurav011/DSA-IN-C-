#include<iostream>
using namespace std;

bool isarraysorted(int arr[], int N, int i){
    //base case
    if(i==N-1){
        return 1;
    }

    //rec case
    if(arr[i]<arr[i+1]){
        return isarraysorted(arr, N, i+1);
    }
    return 0;
    
}

int main(){
    int N;
    cin>>N;
    int arr[100];
    int i=0;
    while(i<N){
        cin>>arr[i];
        i++;
    }
    if(isarraysorted(arr,N,0)==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}