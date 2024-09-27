#include<iostream>
using namespace std;

void linershorting(int arr[], int N){
    for(int i=1; i<=N-1; i++){
        for(int j=0; j<N; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int b=0; b<N; b++){
        cout<<arr[b]<<" ";
    }
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    int i=0;
    while(i<N){
        cin>>arr[i];
        i++;
    }
    linershorting(arr,N);
    return 0;
}