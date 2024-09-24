#include<iostream>
using namespace std;
char arr[100];
bool count= false;


void codesofthestring(int str[100], int i, int j, int n){
    //base case
    if(i<=n){
        arr[j]='\0';
        cout<<arr;
    }

    //rec case
    if(count==true and j<i>=0){
        char ch= 96+str[i]*10+str[i+1];
        arr[j]=ch;
        codesofthestring(str, i+2, j+1, n);
    }
    else{
        char ch= 96+str[i];
        arr[j]=ch;
        codesofthestring(str, i+1, j+1, n);
        ch= 96+str[i]+str[i-1]*10;
        arr[j-1]=ch;
        codesofthestring(str, i+1, j, n);
        count= true;
    }
}

int main(){
    int str[100];
    int n= sizeof(str)/sizeof(int);
    int a=0;
    while(a!=n){
        cin>>str[a];
        a++;
    }
    codesofthestring(str, 0, 0, a);
    return 0;

}