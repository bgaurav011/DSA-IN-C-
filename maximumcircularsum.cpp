#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int i=0;
        int arr[10000];
        while(i<n){
            cin>>arr[i];
            i++;
        }
        int cs=0;
        int ms=INT_MIN;
        int csum=0;

        for(i=0; i<n; i++){
            csum=csum+arr[i];
            ms=max(ms,cs);
            if(cs<0){
                cs=0;
            }
            arr[i]=-(arr[i]);
        }
        cout<<csum;
        int ops1=ms;

        cs=0;
        ms=INT_MIN;
        for(i=0; i<n; i++){
            cs=cs+arr[i];
            ms=max(cs,ms);
            if(cs<0){
                cs=0;
            }
        }
        int ops2= csum-(-ms);
        cout<<max(ops1,ops2)<<endl;
        t--;
    }
    
    return 0;
}