#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int row=1;
    while(row<=N-1){
        cout<<" ";
        row=row+1;
    }
    cout<<'1';
    cout<<endl;

    //middle upper
    int i=1;
    row=1;
    while(i<=(N-1)/2){//1<=3
        //space
        int a=1;
        while(a<=((N-1)-2*row)){//1<=3
            cout<<" ";
            a=a+1;
        }
        //star
        int b=1;
        int stno=row+1;
        while(b<=(row+1)){
            cout<<stno;
            stno=stno-1;
            b=b+1;
        }
        //space
        int c=1;
        while(c<=(2*row)-1){
            cout<<" ";
            c=c+1;
        }
        //star
        int d=1;
        while(d<=row+1){
            cout<<d;
            d=d+1;
        }
        cout<<endl;
        i=i+1;
        row=row+1;
    }

    //middle bootum
    int j=1;
    row=1;
    while(j<=((N+1)/2)-2){//1<=
        //space
        int e=1;
        while(e<=2*row){//1<=2
            cout<<" ";
            e=e+1;
        }
        //star
        int f=1;
        int no=((N+1)/2)-row;//no=3
        while(f<=((N+1)/2)-row){//1<=
            cout<<no;
            no=no-1;
            f=f+1;
        }
        //space
        int g=1;
        while(g<=N-(2*row)-2){//
            cout<<" ";
            g=g+1;
        }
        //star
        int h=1;
        while(h<=((N+1)/2)-row){//1<=
            cout<<h;
            h=h+1;
        }
        cout<<endl;
        j=j+1;
        row=row+1;
    }
    //for last line
    int k=1;
    while(k<=N-1){
        cout<<" ";
        k=k+1;
    }
    cout<<'1';
    return 0;
}