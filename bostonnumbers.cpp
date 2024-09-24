#include<iostream>
#include<math.h>
using namespace std;

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int sumofDigitsPrimeFactor(int n){
    int sum=0;
    while(n%2==0){
        sum=sum+sumOfDigits(2);
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i=i+2){
        while(n%i==0){
            sum=sum+sumOfDigits(i);
            n=n/i;
        }
    }
    if(n>2){
        sum=sum+sumOfDigits(n);
    }
    return sum;
}

int main(){
    int number;
    cin>>number;
    int originalsum =sumOfDigits(number);
    int primefactorsum =sumofDigitsPrimeFactor(number);
    if(originalsum == primefactorsum){
        cout<<'1';
    }
    else{
        cout<<'0';
    }
    return 0;
}