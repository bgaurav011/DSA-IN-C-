#include<iostream>
using namespace std;
 
void recursionpattern(int N,int i){
    //base case
    if(i==N){
        return;
    }

    //rec case
    for(int j=0; j<=i; j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    return recursionpattern(N,i+1);

}

int main(){
    int N;
    cin>>N;
    recursionpattern(N,0);
    return 0;
}