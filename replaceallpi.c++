#include<iostream>
#include<cmath>
using namespace std;

string replacepi(string str){
    //base case
    if(str.length()<=1){
        return str;
    }

    //rec case
    string cs=str.substr(0,2);
    if(cs=="pi"){
        return "3.14"+replacepi(str.substr(2));
    }
    else{
        return str[0]+replacepi(str.substr(1));
    }
}

int main(){
    int N;
    cin>>N;
    int i=0;
    string str;
    while(i<N+1){
        getline(cin,str);
        string res=replacepi(str);
        cout<<res<<endl;
        i++;
    }
    return 0;
}