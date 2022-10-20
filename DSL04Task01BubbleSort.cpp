#include<iostream>
using namespace std;

int main(){
	int sz,i;
	int container;
	int arr[sz];
	cout<<"Enter size of your array"<<endl;
	cin>>sz;
	cout<<"Enter the "<<sz<<" numbers of your array "<<endl;
	
	for(i=0;i<sz;i++){
		cin>>arr[i];
	}
	
	int counter=1;
	while(counter<sz){
		for(int i=0;i<sz-1;i++){
			if(arr[i]>arr[i+1]){
			
				container=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=container;
				
				
			}
		
		}
		counter++;
		
	}
	
	cout<<"Your sorting array is : "<<endl;
	for(i=0;i<sz;i++){
		
	    cout<<arr[i]<<" ";
	}
	
	
	
	return 0;
}
