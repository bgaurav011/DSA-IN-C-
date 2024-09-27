#include<iostream>
using namespace std;
int main(){
    long long int N1;//       
    cin>>N1;
    long long int N2;
    cin>>N2;
   long long int max;//      
    if(N2>N1){
        max=N2;
    }
    else{
        max=N1;
    }
    while(max!=1){//        6!=1
        if(max%N1==0 && max%N2==0){//       
            cout<<max;
            break;
        }
        max=max+1;
     }
    return 0;
}