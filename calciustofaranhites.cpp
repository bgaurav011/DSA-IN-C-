#include<iostream>
using namespace std;
# define a 0.55
int main(){
    int min;
    cin>>min;
    int max;
    cin>>max;
    int step;
    cin>>step;
    int c;
    while(min<=max){
        cout<<min<<"\t";
        c=a*(min-32);
        cout<<c<<endl;
        min=min+step;
    }
    return 0;
}