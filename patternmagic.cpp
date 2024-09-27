#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int tr=(2*N)-1;
    int row=1;
    while(row!=tr){
        cout<<"*";
        row++;
    }
    cout<<endl;
    row=1;

    while(row<=(tr-1)/2){
        int i=1;
        while(i<=(((tr-1)/2)+1)-row){
            cout<<"*";
            i++;
        }
        int j=1;
        while(j<=(2*row)-1){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=(((tr-1)/2)+1)-row){
            cout<<"*";
            k
        }
    }
}