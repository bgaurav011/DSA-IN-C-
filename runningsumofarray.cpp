#include<iostream>
using namespace std;

void sumofarray(int nums[], int N){
    int sum=0;
    for(int i=0; i<=N-1; i++){
        sum=sum+nums[i];
        nums[i]=sum;
    }
    for(int j=0; j<=N-1; j++){
        cout<<nums[j]<<" ";
    }
}

int main(){
    int N;
    cin>>N;
    int nums[N];
    int i=0;
    while(i<N){
        cin>>nums[i];
        i++;
    }
    sumofarray(nums,N);
    return 0;
}