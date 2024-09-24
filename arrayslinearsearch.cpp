#include<iostream>
using namespace std;

int main(){
    long long int N;    
    cin>>N;
    int arr[N];
    int i=0;
    while(i<=N-1){
        cin>>arr[i];
        i++;
    }
    long long int M;
    cin>>M;
    bool b=true;
    for(int a=0; a<=N-1; a++){
        if(M==arr[a]){
            cout<<a<<endl;
            b=false;
            break;
        }
    }
    if(b==true){
        cout<<"-1";
    }
}