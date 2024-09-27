#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int row=1;
    while(row<=N){
        int i=1;
        while(i<=row){
            cout<<'*';
            i=i+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}