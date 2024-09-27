#include<iostream>
using namespace std;

void reversearray(int arr[], long long int N){
  int reversarr[N];
  int j=N-1;
  int i=0;
  while(j>=0){
    reversarr[i]=arr[j];
    i++;
    j--;
  }
    for(int a=0; a<N; a++){
        cout<<reversarr[a]<<endl;
    }
}

int main(){
    long long int N;
    cin>>N;
    int arr[N];
    int i=0;
    while(i<N){
        cin>>arr[i];
        i++;
    }
    reversearray(arr,N);
    return 0;
}