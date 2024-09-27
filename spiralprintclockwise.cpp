#include<iostream>
using namespace std;

void spiralprintclockwise(int arr[100][100],int tr ,int tc){
    int sr,sc,er,ec;
    sr=0,sc=0,er=tr-1,ec=tc-1;
    while(sr<=er && sc<=ec){
        //forward
        for(int i=sc; i<=ec; i++){
            cout<<arr[sr][i]<<", ";
        }
        sr++;

        //downword
        for(int j=sr; j<=er; j++){
            cout<<arr[j][ec]<<", ";
        }
        ec--;

        //backword
        if(sr<=er){
            for(int k=ec; k>=sc; k--){
                cout<<arr[er][k]<<", ";
            }
        }
        er--;

        //uppword
        if(sc<=ec){
            for(int l=ec; l>=sr; l--){
                cout<<arr[l][sc]<<", ";
            }
        }
        sc++;
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
    spiralprintclockwise(arr,M,N);
    cout<<"END";
    return 0;
}