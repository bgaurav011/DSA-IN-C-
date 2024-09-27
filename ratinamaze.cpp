#include<iostream>
using namespace std;

int sol[100][100]={0};

bool ratinamaze(char arr[100][100],int i,int j,int N,int M){
    //Basecase
    if(i==N-1 && j==M-1){
        sol[i][j]=1;
        for(i=0; i<N; i++){
            for(j=0; j<M; j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    //Rec case
    sol[i][j]=1;
    //Forward
    if(j<=M-1 && arr[i][j+1]!='x'){
        bool agekaanswer = ratinamaze(arr,i,j+1,N,M);
        if(agekaanswer == true){
            return true;
        }
    }

    //Downword
    if(i<=N-1 && arr[i+1][j]!='x'){
        bool agekaanswer = ratinamaze(arr,i+1,j,N,M);
        if(agekaanswer == true){
            return true;
        }
    }
    sol[i][j]=0;
    return false;
}

int main(){
    int N,M;
    cin>>N>>M;
    char arr[100][100];
    for(int i=0; i<=N-1; i++){
        for(int j=0; j<=M-1; j++){
            cin>>arr[i][j];
        }
    }
    ratinamaze(arr,0,0,N,M);
    return 0;
}