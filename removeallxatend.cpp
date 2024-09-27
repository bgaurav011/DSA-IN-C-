#include<iostream>
using namespace std;

string moveallatend(string str){
    //base case
    if(str.length()==0){
        return"";
    }

    //rec case
    char x=str[0];
    if(x =='x'){
        return moveallatend(str.substr(1))+x;
    }
    else{
        return x+moveallatend(str.substr(1));
    }
}

int main(){
    string str;
    getline(cin,str);
    cout<<moveallatend(str)<<endl;
    return 0;
}