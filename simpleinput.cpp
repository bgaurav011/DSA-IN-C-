#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int sum=0;
    int no;
    while(1){
        cin>>no;
        sum=sum+no;
        if(sum<0){
            break;
        }
        cout<<no<<endl;
    }
    return 0;
}
