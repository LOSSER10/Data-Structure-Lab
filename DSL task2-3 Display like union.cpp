#include<iostream>
using namespace std;
int main(){
	
	int i,j;
	int arr[10]={2,4,7,3,2,9,7,0,5,3};
	
	cout<<"All multiple values are print in one time :  ";
	for(i=0;i<10;i++){
		
	
		for(j=0;j<10;j++){
			
				
				if(arr[i]==arr[j]){
					
				break;
				}
				
				
			
			
		}
		if(i==j){
			cout<<arr[i]<<" ";
		}
		
	}	
	
	
	return 0;
}
