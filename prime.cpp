#include <iostream>
using namespace std;
int main(){
    long long int N;
    cin>>N;
    int i=2;
    while(i<N){
        if(N%i==0){
            cout<<"Not prime"<<endl;
            break;
        }
        else{
            i++;
             cout<<"Prime"<<endl;
             break;
        }
    }
    return 0;
}