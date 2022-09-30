#include<iostream>
using namespace std;

void oddShow(int first,int last){

cout<<"The Odd Numbers In This Range are : "<<endl;
for(int i=first;i<=last;i++){
	if(i%2==!0){
		
		cout<<i<<" ";
	}
}
}
int main(){

int n1,n2;

cout<<"Enter Starting Number :"<<endl;
cin>>n1;
cout<<"Enter Ending Numbers :"<<endl;
cin>>n2;

oddShow(n1,n2);

return 0;
}



