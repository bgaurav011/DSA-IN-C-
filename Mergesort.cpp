#include<iostream>
using namespace std;

void mergetwoshortedarray(int arr[100], int s, int e){
    int i=s;
    int j=s;
    int mid=(s+e)/2;
    int k=mid+1;
    int temp[100];

    while(i<=mid && k<=e){
        if(arr[i]>arr[k]){
            temp[j]=arr[k];
            k++;
            j++;
        }
        else{
            temp[j]=arr[i];
            i++;
            j++;
        }
    }

    while(k<=e){
        temp[j]=arr[k];
        j++;
        k++;
    }
    while(i<=mid){
        temp[j]=arr[i];
        j++;
        i++;
    }

    for(int a=s; a<=e; a++){
        arr[a]=temp[a];
    }
}

void mergeshort(int arr[100], int s, int e){
    //base case
    if(s==e){
        return;
    }

    //rec.case
    int mid=(s+e)/2;
    mergeshort(arr,s,mid);
    mergeshort(arr,mid+1,e);
    mergetwoshortedarray(arr,s,e);
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
    mergeshort(arr,0,N-1);
    for(int a=0; a<N; a++){
        cout<<arr[a]<<" ";
    }
    return 0;
}