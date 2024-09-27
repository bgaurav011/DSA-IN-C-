#include<iostream>
#include<math.h>
using namespace std;
int arr[10000000];
int ls[10000000];
int rs[10000000];

int main(){
    int T;
    cin>>T;

    while(T!=0){
        long long int N;
        cin>>N;
        int i=0;
        while(i<N){
            cin>>arr[i];
            i++;
        }
        ls[0]=arr[0];
        for(int i=1; i<N; i++){
        ls[i]=max(ls[i-1],arr[i]);
        }

        rs[N-1]=arr[N-1];
        for(int i=N-2; i>=0; i--){
        rs[i]=max(rs[i+1],arr[i]);
        }

        int water=0;
        for(int i=0; i<N; i++){
        water=water + min(ls[i], rs[i])-arr[i];
        }
    
        cout<<water<<endl;
        
        T--;
    }
    
    return 0;
}