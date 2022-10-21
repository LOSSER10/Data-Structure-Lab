#include<iostream>
using namespace std;

int linearSearch(int arr[],int sz,int ds){
	

    
	
	for(int i=0;i<sz;i++){
		if(arr[i]==ds){
			
		
			return i;
			
		}
		
	}
	return -1;
	
	
}

int main(){
	
	int sz,ds,position;

	
	cout<<"Enter the size of your array :"<<endl;
	cin>>sz;

	int arr[sz];
	cout<<"Enter your "<<sz<<" numbers of the array :"<<endl;
	
	for(int i=0;i<sz;i++){
		
		cin>>arr[i];
	}
	
	cout<<"Enter your desired number :"<<endl;
	cin>>ds;
	
	cout<<"Index number of your  desired number : "<<endl;
	int output=linearSearch(arr,sz,ds);
	cout<<output;

	
	return 0;
}
