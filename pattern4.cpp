#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int row=1;
    while(row<=N-1){//2<=3
        int i=1;
        while(i<=row){//1<=2
            cout<<i;
            i=i+1;
        }
        int j=1;
        while(j<=(2*N-1)-2*row){//1<=
            cout<<" ";
            j=j+1;
        }
        int k=1;
        int a=row;
        while(k<=row){
            cout<<a;
            a=a-1;
            k=k+1;
        }
        cout<<endl;
        row=row+1;
    }

        int b=1;
        while(b<=row){//1<=4
            cout<<b;
            b=b+1;
        }
        int c=1;
        int d=b-2;
        while(c<=N-1){
            cout<<d;
            d=d-1;
            c=c+1;
        }
     
    return 0;

}