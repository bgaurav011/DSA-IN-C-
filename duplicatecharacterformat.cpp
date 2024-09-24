#include<iostream>
#include<cmath>
#include<string>
using namespace std;

char duplicate(string str[100], char out[100], int j){
    //base case
    if(str.substr(0)=='\0'){
        out[j]='\0';
        return out;
    }

    //rec. case
    out[j]=str.substr[j];
    if(str.substr[j+1]==str.substr[j]){
        out[j+1]='*';
    }
    duplicate(str.substr(j+1),out,j+1);
}

int main(){
    string str;
    getline(cin,str);
    char out[100];
    cout<<duplicate(str,out,0)<<endl;
    return 0;
}