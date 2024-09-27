#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int oddsum=0;
    int evensum=0;
    int i=1;
    while(N!=0){
        if((i%2)==0){//
             int a;
             a=N%10;
             evensum=evensum+a;
        }
        else if((i%2)!=0){
             int b;
             b=N%10;
             oddsum=oddsum+b;
            }
        i=i+1;
        N=N/10;
        }
    cout<<"Sum of all even placed digit is "<<evensum<<endl;
    cout<<"Sum of all odd placed digit is "<<oddsum;
   return 0;
}

