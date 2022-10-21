#include<iostream>
using namespace std;

int BinarySearch(int arr[],int sz,int dn){
	
	int fd,ld,md;
	fd=0;
	ld=sz-1;
	int position=-1;
	bool found=false;
	
	while(!found&&fd<=ld){
		md=(fd+ld)/2;
		
		if(arr[md]==dn){
			found=true;
			position=md;
			
		}
		else if(arr[md]>dn)
			ld=md-1;
		else{
			fd=md+1;
		}

     
	}
	 return position;
	
	
}

int main(){
	int sz,dn;

	cout<<"Enter the size of your array :"<<endl;
	cin>>sz;
	
	int arr[sz];
	cout<<"Enter your array :"<<endl;
	for(int i=0;i<sz;i++){
		cin>>arr[i];
	
	}
	cout<<"Your Desire number is: "<<endl;
	cin>>dn;
	
	int output=BinarySearch(arr,sz,dn);
	if(output==-1){
		cout<<"Not Found ";
	}
	else{
		
		cout<<"Value found in index : "<<output;
	}
	return 0;
}
