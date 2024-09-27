#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a;
    int row=1;
    while(row<=2){//2<=2
        int i=1;
        while(i<=row){//1<=2
             a=row;
            cout<<a;
            i=i+1;
        }
        cout<<endl;                                      
        row=row+1;
    }
    int j=1;
    row=1;
    while(j<=N-2){//1<=3
        a=row+2;//a=3
        cout<<a;//               3
        int b=1;
        while(b<=row){//1<=1     0
            cout<<'0';
            b=b+1;
        }
        cout<<a; //              3
        cout<<endl;
        j=j+1;
        row=row+1;
    }
    return 0;
}