#include <iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int oddsum=0;
    int evensum=0;
    while(no!=0){
        int r=no%10;
         if(r%2==0){
            evensum=evensum+r;
            no=no/10;
         }
         else{
            oddsum=oddsum+r;
            no=no/10;
         }
    }
    cout<<evensum<<endl;
    cout<<oddsum;
}