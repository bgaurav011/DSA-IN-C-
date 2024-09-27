#include<iostream>
using namespace std;

bool palindrom(int arr[], int i, int j){
    //base case
    if(j<=i){
        return true;
    }

    //rec case
    if(arr[i]==arr[j]){
        bool yes=palindrom(arr,i+1,j-1);
        if(yes==true){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    if((palindrom(arr,0,n-1))==true){
        cout<<"Yes it is palindrom";
    }
    else{
        cout<<"No it is not palindrom";
    }
    return 0;
}
