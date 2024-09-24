#include<iostream>
using namespace std;
int co=0;
string out[100];

void permutation (char inp[100], int i){
    //base case
    if(inp[i]=='\0'){
        out[i]=inp[i];
        co++;
        return;
    }

    //rec case
    for(int j=i; inp[j]!='\0'; j++){
        swap(inp[i],inp[j]);
        permutation(inp, i+1);
        swap(inp[i],inp[j]);
    }
}

int main(){
    char inp[100];
    cin>>inp;
    char key;
    cin>>key;
    permutation(inp ,0);
    for(int i=0; i<=co ;i++){
        if(out[i]==key){
            cout<<out[i+1];
        }
    }
    return 0;
}