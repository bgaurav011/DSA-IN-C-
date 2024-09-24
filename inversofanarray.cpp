#include<iostream>
using namespace std;
int main(){
    int N;      //5
    cin>>N;
    int arr[N]; //arr[5]
    int i=0;
    while(i<=N-1){        //
        cin>>arr[i];
        i++;
    }
    int j=N-1;
    for(i=0;i<=N;i++){
        if(arr[i]==0){
            cout<<arr[i];
        }
        else{
           swap(arr[i],arr[j]);
            j--;
        }
    }
    for(i=0;i<=N-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}