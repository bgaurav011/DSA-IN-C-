#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        long long int car_no;
        cin>>car_no;
        int rem;
        int oddsum=0;
        int evensum=0;
        while(car_no!=0){
            rem=car_no%10;
            if(rem%2==0){
                evensum=evensum+rem;
            }
            else{
                oddsum=oddsum+rem;
            }
            car_no=car_no/10;
        }
        if(evensum%4==0 || oddsum%3==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}