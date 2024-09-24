#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int N1,N2;
    cin>>N1>>N2;
    int i=N1;//401
    while(i<=N2){   //401<=1000
        int sum=0;
        int a=i;
        int count=0;
        while(a!=0){    //400
            count++;
            a=a/10;
        }
        a=i;
        while(a!=0){    //401
            int rem;
            rem=a%10;   //1
            sum=sum+pow(rem,3); //
            a=a/10;
        }
            if(sum==i){
                cout<<sum<<endl;
            }
        
        i++;
    }
    return 0;
}