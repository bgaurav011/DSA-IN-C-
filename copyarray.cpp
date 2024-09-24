#include<iostream>
using namespace std;

int length(char a[100]){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}

void copy(char a[100], char b[100]){
    int l=0;
    int m=0;
    while(l<=length(a)){
        b[m]=a[l];
        m++;
        l++;
    }
    cout<<a<<endl;
    cout<<b<<endl;
}

int main(){
    char a[100];
    cin.getline(a,100);
    char b[100];
    copy(a,b);
    return 0;
}