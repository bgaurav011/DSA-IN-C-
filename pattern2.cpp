#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
         //space
            int i=1;
            while(i<=n-row){
                cout<<" ";
                i=i+1;
            }


        //star
            int j=1;
            int stno=row;
            while(j<=row){
                cout<<stno;
                stno=stno+1;
                j=j+1;
            }


        //hash
            int k=1;
            int stno1=stno-2;
            while(k<=row-1){
                cout<<stno1;
                stno1=stno1-1;
                k=k+1;
            }
            
            cout<<endl;
            row=row+1;
    }

    return 0;
}