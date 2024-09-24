#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string arr1[100][100];
long long int co=0;

void dictionaryorder( char arr[100],long long int i){
    //base case
    if(arr[i]=='\0'){
        arr1[co][]=arr;
        co++;
        return;

    }

    //rec case
    for(long long int j=i; arr[j]!='\0'; j++){
        swap(arr[i],arr[j]);
        dictionaryorder(arr,i+1);
        swap(arr[i],arr[j]);
    }
}

int main(){
    char arr[100];
    cin>>arr;
    dictionaryorder(arr,0);
    sort(arr1,arr1 + co);
    long long int x;
    for(long long int i=0; i<co; i++){
        if(arr1[i]==arr){
            x=i;
        }
    }
    while(x!=co){
        x++;
        cout<<arr1[x]<<endl;
    }
    return 0;
}