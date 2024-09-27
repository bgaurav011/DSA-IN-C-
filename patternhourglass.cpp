#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int tr=(2*N)+1;
    int row=1;
    while(row<=(tr+1)/2){
        int a=1;
        while(a<=row-1){
            cout<<" ";
            a++;
        }
        int b=1;
        int c=(N+1)-row;
        while(b<=(tr-1)/2+2-row){   //6
            cout<<c;
            c--;
            b++;
        }
        int d=1;
        while(d<=(tr+1)/2-row){
            cout<<d;
            d++;
        }
        cout<<endl;
        row++;
    }

    row=1;
    while(row<=(tr-1)/2){   //5
        int p=1;
        while(p<=(tr-1)/2-row){
            cout<<" ";
            p++;
        }
        int q=row;
        while(q<=row+1){
            cout<<q;
            q--;
        }
        int r=1;
        while(r<=row){      //1<=1
            cout<<r;
            r++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}