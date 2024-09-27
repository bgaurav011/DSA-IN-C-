#include<iostream>
using namespace std;

int lastindex(int arr[], int N, int M, int i){
    //base case
    if(i<0){
        return -1;
    }

    //rec case
    if(arr[i] == M){
        return i;
    }
    return lastindex(arr,N,M,i-1);
}

int main(){
    int N;
    cin>>N;
    int arr[100];
    int i=0;
    while (i<N){
        cin>>arr[i];
        i++;
    }
    int M;
    cin>>M;
    int a = lastindex(arr,N,M,N-1);
    if(a>0){
        cout<<a;
    }
    else{
        cout<<"-1";
    }
    return 0;

}