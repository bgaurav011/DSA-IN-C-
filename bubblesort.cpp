#include<iostream>
using namespace std;

void bubblesort(int arr[], int N){
    for(int i=1; i<N; i++){
        for(int j=0; j<=N-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int k=0; k<N; k++){
        cout<<arr[k]<<endl;
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
    bubblesort(arr,N);
    return 0;
}