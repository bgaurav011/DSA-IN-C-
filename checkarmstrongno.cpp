#include<iostream>
#include<math.h>
using namespace std;

int armstrongnumber(long long int i,long long int N){
   int count=0;
   long long int sum=0;
   while(i!=0){
    count++;
    i=i/10;
   }
    i=N;
    while(i!=0){
        int rem=0;
        rem=i%10;   
        sum=sum+pow(rem,count); 
        i=i/10;
    }
    if(N==sum){
        cout<<"true"<<endl;
    }
    else{
        cout<<"flase"<<endl;
    }
}


int main(){
   long long int N;
   cin>>N;
   long long int i=N;   
   int armstrongnumber(i,N);
   
    return 0;
}