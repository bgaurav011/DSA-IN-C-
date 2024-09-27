#include<iostream>
using namespace std;

void spiralprintanticlockwise(int arr[100][100],int tr,int tc){
    int sr,sc,er,ec;
    sr=0,sc=0,er=tr-1,ec=tc-1;
    while(sr<=er && sc<=ec){
        //downword
        for(int i=sr; i<=er; i++){
            cout<<arr[i][sc]<<" ";
        }
        sc++;

        //forword
        for(int j=sc; j<=ec; j++){
            cout<<arr[er][j]<<" ";
        }
        er--;

        //uppword
        if(sc<=ec){
            for(int k=er; k>=sr; k--){
                cout<<arr[k][ec]<<" ";
            }
        }
        ec--;

        //backword
        if(sr<=er){
            for(int l=ec; l>=sc; l--){
                cout<<arr[sr][l]<<" ";
            }
        }
        sr++;
    }
}


int main(){
    int M,N;
    cin>>M>>N;
    int arr[100][100];
    for(int i=0; i<=M-1; i++){
        for(int j=0; j<=N-1; j++){
            cin>>arr[i][j];
        }
    }
    spiralprintanticlockwise(arr,M,N);
    return 0;
}