# include<iostream>
# include<cmath>
#include<string>
#include<bits/stdc++.h>
using namespace std; 
string arr[100];
int x=0;
void subsequence(string str,string str2){
    //base case
    if(str.length()==0){
            arr[x]=str2;
           arr[x+1]='\0';
        return;
    }
    //rec case
    subsequence(str.substr(1),str2+str[0]);
    subsequence(str.substr(1),str2); 
}


int main(){
    int N;
    cin>>N;
    int i=0;
    string str;
        while(i<N+1){
        getline(cin,str);
        subsequence(str,"");
        sort(arr,arr + x);
        cout<<arr<<endl;
        i++;
        }
    return 0;
}
