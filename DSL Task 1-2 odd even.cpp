#include<iostream>
using namespace std;

int main(){

int i, n,array[100];
cout<<"Enter size of your array ";
cin>> n;
cout<<"Enter your " << n << " Element\n";
for(i=0;i<n;i++){
   cin>> array[i];}
cout<<"Even Numbers : "<<" ";
for(i=0;i<n;i++){

    if(array[i]%2==0){
        cout <<array[i]<<" ";}}
cout<<"Odd Numbers : ";
for(i=0;i<n;i++){
    if(array[i]%2==1){

        cout<<array[i]<<" ";}}



return 0;
}













