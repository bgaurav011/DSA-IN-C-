#include<iostream>
#include<math.h>
using namespace std;

int convertion(int sb, int db, int sn){
    int rem=0;
    int digitsum=0;
    int count=0;

    while(sn!=0){
        rem=sn%10;
        digitsum=digitsum+rem*pow(sb,count);
        count++;
        sn=sn/10;
    }
    rem=0;
    while(digitsum!=0){
        rem=rem*10+digitsum%2;
        digitsum=digitsum/2;
    }
    return rem;
}

int main(){
    int sb,db,sn;
    cin>>sb>>db>>sn;
    int num=convertion(sb,db,sn);
    cout<<num;
    return 0;
}