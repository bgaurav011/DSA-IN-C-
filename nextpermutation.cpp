#include<iostream>
using namespace std;

void nextpermutation(int arr[10000],int N){
    int i=N-1;
    int j=N-2;
    while(i>=2 && j>=1){
        if(arr[i]>arr[j] && arr[j]>arr[j-1]){
            swap(arr[i],arr[j]);
        }
        else if(arr[i]>arr[j] && arr[j]<arr[j-1]){
            swap(arr[i],arr[j]);
        }
        else if(arr[i]<arr[j] && arr[j]<arr[j-1]){
            swap(arr[i],arr[j-1]);
        }
        else if(arr[i]<arr[j] && arr[i]>arr[j-1]){
            swap(arr[j],arr[i]);
            swap(arr[j-1],arr[j]);
        }
        else if(arr[i]<arr[j] && arr[i]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            swap(arr[j],arr[i]);
        }
        
        i--;
        j--;
    }
}


int main(){
    int T;
    cin>>T;
    int i=0;
    while(T){
        int N;
        cin>>N;
        int arr[10000];
        int a=0;
        while(a<N){
            cin>>arr[a];
            a++;
        }
        nextpermutation(arr,N);
        for(int a=0; a<N; a++){
            cout<<arr[a]<<" ";
        }
        T--;
    }
    return 0;
}