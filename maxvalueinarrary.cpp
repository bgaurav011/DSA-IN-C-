#include<iostream>
using namespace std;
 
int maxvalue(int arr[],int N){
    int max=0;
    for(int i=0; i<N; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int N;
    cin>>N;
    int j=0;
    int arr[N];
    while(j<=N-1){
        cin>>arr[j];
        j++;
    }
    int maximum=maxvalue(arr,N);
    cout<<maximum;
    return 0;
}