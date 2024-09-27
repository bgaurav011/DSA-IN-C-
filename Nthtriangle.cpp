#include<iostream>
using namespace std;

int Nthtriangle(int N){
    //base case
    if(N==0){
        return 0;
    }

    //rec case
    return (Nthtriangle(N-1)+N);
}

int main(){
    int N;
    cin>>N;
    int no=Nthtriangle(N);
    cout<<no;
    return 0;
}