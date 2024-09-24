#include<iostream>
using namespace std;

void duplicatecharacter(char str1[10000], char str2[10000], int i, int j){
    //base case
    if(str1[i]=='\0'){
        str2[j]='\0';
        cout<<str2;
        return;
    }

    //rec case
    str2[j]=str1[i];
    if(str1[i]!=str1[i-1]){
        str2[j]=str1[i];
        duplicatecharacter(str1,str2,i+1,j+1);
    }
    else{
        str2[j]='*';
        str2[j+1]=str1[i];
        duplicatecharacter(str1,str2,i+1,j+2);
    }
}

int main(){
    char str1[10000];
    cin>>str1;
    char str2[10000];
    duplicatecharacter(str1,str2,0,0);
    return 0;
}