#include<iostream>
using namespace std;

int main(){


	int i,j,n,k;
int arr1[5]={1,2,3,4,5};
int arr2[5]={6,7,8,9,10};
int arr3[11];

for(i=0,j=4,k=4;i<5,j>=0,k>=0;i++,j--,k--){

    arr3[j]=arr1[i];

    arr3[i+5]=arr2[k];

}

for(n=0;n<10;n++){
      cout<<arr3[n];

}
}
