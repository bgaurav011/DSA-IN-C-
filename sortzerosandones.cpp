#include<iostream>
using namespace std;

void sortZeroones(int arr[], int N){
    for(int i=1; i<=N-1; i++){      //1<=6
        for(int j=0; j<=N-i-1; j++){     //0=4
            if(arr[j]==1){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int k=0; k<N; k++){
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
    sortZeroones(arr,N);
    return 0;
}