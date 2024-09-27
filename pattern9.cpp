#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int row=1;
    while(row<=(N+1)/2){//      1<=6
        int a=1;
        while(a<=row-1){//      1<=
            cout<<" ";
            a=a+1;
        }
        int b=1;
        int p=((N+1)/2-row);//  5
        while(b<=((N-1)/2+2)-row){//      
            cout<<p;
            p=p-1;
        }
        int c=1;
        while(c<=((N+1)/2)-row){//      1<=5
            cout<<c;
            c=c+1;
        }
        cout<<endl;
        row=row+1; 
    }
    row=1;
    while(row<=(N-1)/2){
        int i=1;
        while(i<=(N-1)/2-row){//        4
            cout<<" ";
            i=i+1;
        }
        int j=1;
        int q=row;
        while(j<=row+1){//      2
            cout<<q;
            q=q-1;
        }
        int k=1;
        while(k<=row){//        
            cout<<k;
            k=k+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
 