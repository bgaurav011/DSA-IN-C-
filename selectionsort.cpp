#include<iostream>
using namespace std;

void selectionsort(int arr[],int N){
    for(int i=0; i<=N-2; i++){
        int minindex=i;
        for(int j=i+1; j<=N-1; j++){
            if(arr[j]<arr[i]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    for(int a=0; a<N; a++){
        cout<<arr[a]<<endl;
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
    selectionsort(arr,N);
    return 0;
}