#include<iostream>
using namespace std;

int main(){

    int n=0,i;

int  arr[13];
cout<<"Enter your 4 Numbers :"<<endl;

for( i=0; i<4;i++){
cin>>arr[i];

}
cout<<" Numbers in Order : ";
for( i=0;i<4;i++){


  cout<<arr[i]<<" ";

}
cout<<endl;
cout<<" Numbers in Reverse : ";
for(i=4-1;i>=0;i--){
    cout<<arr[i]<<" ";
}

return 0;
}
