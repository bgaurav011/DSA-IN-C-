#include<iostream>
using namespace std;

void rotateimage(int arr[100][100], int N){
    int sr,sc,er,ec;
    sr=0,sc=0,er=N-1;
    int j=0;
    int arr1[100][100];
    while(sr<=er){
        ec=N-1;
        for(int i=0; i<=er; i++){
            arr1[i][j]=arr[sr][ec];
            ec--;
        }
        j++;
        sr++;
    }
    for(int k=0; k<=N-1; k++){
        for(int l=0; l<=N-1; l++){
            cout<<arr1[k][l]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int N;
    cin>>N;
    int arr[100][100];
    for(int i=0; i<=N-1; i++){
        for(int j=0; j<=N-1; j++){
            cin>>arr[i][j];
        }
    }
    rotateimage(arr,N);
    return 0;
}