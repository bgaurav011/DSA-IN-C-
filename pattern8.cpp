#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int row=1;
    while(row<=(N-1)/2){//    1<=3
        //*
        int a=1;
        int p=(N-1)/2;//        3
        while(a<=row){//        1<=1
            cout<<p;
            p=p-1;
            a=a+1;
            
        }
        //space
        int b=1;
        while(b<=N-(2*row)){//      1<=7-2
            cout<<" ";
            b=b+1;
        }
        //*
        int c=1;
        int z=p+1;
        while(c<=row){//        1<=1
            cout<<z;
            z=z+1;
            c=c+1;
        }
        cout<<endl;
        row=row+1;
    }

    //MIDDLE ONE    
    int i=1;
    int j=(N-1)/2;
    while(i<=(N+1)/2){//        1<=4
        cout<<j;
        j=j-1;
        i=i+1;
    }
    int d=1;
    while(d<=(N-1)/2){//      1<=3
        cout<<d;
        d=d+1;
    }
    cout<<endl;
 
    //last half
    row=1;
    while(row<=(N-1)/2){//      2<=3
        //*
        int k=1;
        d=(N-1)/2;//        3
        while(k<=((N+1)/2)-row){//      1<=3
            cout<<d;
            d=d-1;
            k=k+1;
        }
        //space
        int l=1;
        while(l<=(2*row)-1){//      1<=1
            cout<<" ";
            l=l+1;
        }
        //*
        int m=1;
        int no=row;
        while(m<=((N+1)/2)-row){//      1<=3
            cout<<no;
            no=no+1;
            m=m+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
    
}