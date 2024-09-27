#include<iostream>
using namespace std;
int co=0;
int sol[100][100]={0};

bool kyaqueenrakhsaktehai(int i,int j, int n){
    for(int l=0; l<i; l++){
        if(sol[l][j]==1){
            return false;
        }
    }

    //diagonal left
    int u=i-1;
    int v=j-1;
    while(u>=0 and v>=0){
        if(sol[u][v]==1){
            return false;
        }
        u--;
        v--;
    }

    //diagonal right
    int p=i-1;
    int q=j+1;
    while(p>=0 and q<n){
        if(sol[p][q]==1){
            return false;
        }
        p--;
        q++;
    }
    return true;
}


bool nqueen(int n, int i){

    //base case
    if(i==n){
        co++;
        return false;
    }

    //rec case
    for(int j=0; j<n; j++){
        if(kyaqueenrakhsaktehai(i,j,n)){
            sol[i][j]=1;
            bool agekaans=nqueen(n,i+1);
            if(agekaans==true){
                return true;
            }
            sol[i][j]=0;
        }
    }
    return false;
}


int main(){
    int n;
    cin>>n;
    nqueen(n,0);
    cout<<co<<endl;
    return 0;
}