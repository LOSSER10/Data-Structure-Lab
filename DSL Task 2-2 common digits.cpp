#include<iostream>
using namespace std;

int main(){
	int i,j;
	int Digits1[5]={1,2,3,4,5};
	int Digits2[6]={1,3,5,6,8,10};
	
	cout<<"Common Digits are : ";
	for(i=0;i<5;i++){
     for(j=0;j<6;j++){
     	if(Digits1[i]==Digits2[j]){
     		
     	cout<<Digits1[i]<<" ";
		 }
	 }
		
	}
	
	
	
	return 0;
}
