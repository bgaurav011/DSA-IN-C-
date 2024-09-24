#include<iostream>
using namespace std;
void diagnolsprint(int arr[100][100], int tr, int tc){
    int sr=0;
    int er=tr-1;
    int sc=0;
    int ec=tc-1;
    for(int i=sr; i<=er; i++){
        int j=i;
        cout<<arr[i][j]<<" ";
    }
    int b=sr;
    for(int a=ec; a>=0; a--){
        cout<<arr[b][a]<<" ";
        b++;
    }
}
int main(){
    int tr;
    cin>>tr;
    int tc;
    cin>>tc;
    int arr[100][100];
    for(int i=0;i<=tr-1;i++){
        for(int j=0; j<=tc-1; j++){
            cin>>arr[i][j];
        }
    }
    diagnolsprint(arr,tr,tc);
    return 0;
}