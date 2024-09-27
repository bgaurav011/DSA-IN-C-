#include<iostream>
using namespace std;


int matrixsearch(int arr[100][100],int r,int c,int key){
    int i=0;
    int j=c-1;
    while(i<=r-1 && j>=0){
        if(arr[i][j] == key){
            return true;
            break;
        }
        else if((arr[i][j])<key){
            i++;
        }
        else{
            j--;
        }
    }
    return false;
}


int main(){
    int N,M;
    cin>>N>>M;
    int arr[100][100];
    for(int i=0; i<=N-1; i++){
        for(int j=0; j<=M-1; j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cin>>key;
    if(matrixsearch(arr,N,M,key)==true){
      cout<<"1";
    }
    else{
      cout<<"0";
    }

    return 0;
}