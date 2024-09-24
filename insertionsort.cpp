#include<iostream>
using namespace std;

void insertionsort(int arr[], int N){
    for(int i=1; i<=N-1; i++){
        int ele=arr[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(ele<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=ele;
    }
    for(int k=0; k<=N-1; k++){
        cout<<arr[k]<<" ";
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
    insertionsort(arr,N);
    return 0;
}