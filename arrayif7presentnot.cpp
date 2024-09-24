#include<iostream>
using namespace std;
bool is7presentornot(int*arr,int n){

	// base case
	if(n==0){
		return false;
	}
	// rec case
	if(is7presentornot(arr,n-1)||arr[n-1]==7){
		return true;
	}
	return false;
}

int fisrtindexof7(int *arr,int n,int i){

	// base case
	if(i==n){
		return -10;
	}
	// rec case
	if(arr[i]==7){
		return i;
	}
	return fisrtindexof7(arr,n,i+1);
}

int lastindexof7(int *arr,int n,int i){

	// base case
	if(i<0){
		return -10;
	}
	// rec case
	if(arr[i]==7){
		return i;
	}
	return lastindexof7(arr,n,i-1);
}

int main(){
	int arr[]={5,1,7,2,7,8,9,17};
	int n=sizeof(arr)/sizeof(int);
    int x=fisrtindexof7(arr,n,0);//3
    int x=lastindexof7(arr,n,n-1);//7
	if(x<0){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<"7 is  present at index "<<x<<endl;

	}
	// cout<<is7presentornot(arr,n)<<endl;
	return 0;

}