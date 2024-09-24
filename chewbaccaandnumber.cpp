#include<iostream>
#include<math.h>
using namespace std;

void chewbaccanumber(int x){
    int number=0;
    int count=0;
    while(x!=0){
        int rem;
        rem=x%10;
        if(rem==9 || rem<5){
            number=rem*pow(10,count)+number;
        }
        else{
            number=(9-rem)*pow(10,count)+number;
        }
        x=x/10;
        count++;
    }
    cout<<number<<endl;
    
}

int main(){
    int x;
    cin>>x;
    chewbaccanumber(x);
    return 0;

}