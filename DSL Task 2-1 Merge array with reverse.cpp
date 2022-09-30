#include<iostream>
using namespace std;

int main(){

int n1,n2,n3,i;
int arr1[100],arr2[100],arrmerge[200];

cout<<"Enter the size for first array : "<<endl;
cin>>n1;
cout<<"Enter "<<n1<<" elements for first array "<<endl;
	
for(i=n1-1;i>=0;i--){
	cin>>arr1[i];
	
}

cout<<"Enter the size for Second array : "<<endl;
cin>>n2;
cout<<"Enter "<<n2<<" elements for first array "<<endl;	
	
for(i=n2-1;i>=0;i--){
	cin>>arr2[i];	
	
     n3=n1+n2;                                                                                           	
}

for(i=0;i<n1;i++){
	
	arrmerge[i]=arr1[i];
}
for(i=0;i<n2;i++){

	arrmerge[n1+i]=arr2[i];
	
}
cout<<"Your merged array is : ";
for(i=n3;i<1;i++){
	cout<<arrmerge[i]<<" ";
	
	}
return 0;

}
