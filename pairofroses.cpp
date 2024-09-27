#include<iostream>
using namespace std;

void pairofroses(int price[], int N, int M){
    for(int a=1; a<N; a++){
        for(int b=0; b<=N-a-1; b++){
            if(price[b]>price[b+1]){
                swap(price[b],price[b+1]);
            }
        }
    }
    for(int k=0; k<=N-2; k++){
        for(int l=k+1; l<=N-1; l++){
            if(price[k]+price[l]==M && price[k]<=price[l]){
                    if(price[k]-price[l]==0 || price[l]-price[k]<M/2){
                        cout<<"Deepak should buy roses whose prices are "<<price[k]<<" and "<<price[l]<<endl;
                    }
                }
            }
        }
}

int main(){
    int T;
    cin>>T;
    for(int a=1; a<=T ;a++){
        int N;
        cin>>N;
        int price[N];
        int i=0;
        while(i<N){
            cin>>price[i];
            i++;
        }
        int M;
        cin>>M;
        pairofroses(price,N,M);
    }
    return 0;
}