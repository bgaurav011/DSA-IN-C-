#include<iostream>
#include<math.h>
using namespace std;
int reversno(int num){
    int a=num;
    int rem=0;
    int rev=0;
    int i=1;
    while(num>0){
        rem=num%10;
        rev=rev+i*pow(10,rem-1);
        i++;
        num=num/10;
    }
    return rev;
}
 

int main(){
    int num;
    cin>>num;
    int inverse=reversno(num);
    cout<<inverse;
    return 0;
}