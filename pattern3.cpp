#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int row=1;
    //upper one
    while(row<=(N+1)/2)
   {
    //space 
        int i=1;
        while(i<=(N+1)/2-row){
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

    //lower one
    row=1;
     int no=(N-1)/2;
    while (row<=(N-1)/2)//2<=3
    {
     //space
        int a=1;
        while(a<=row){
            cout<<" ";
            a=a+1;
        }

    //star
        int b=1;
        int no=((N+1)/2)-row;//3
        while(b<=(N+1)/2-row){//1<=2
            cout<<no;
            no=no+1;
            b=b+1;
        }

    //hash
        int c=1;
        int no1=no-2;
        while(c<=(N-1)/2-row){
            cout<<no1;
            no1=no1-1;
            c=c+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}
 