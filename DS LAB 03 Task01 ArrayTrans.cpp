#include<iostream>
using namespace std;

int main(){
int i,c,r,row1,row2,row,col;
int arr1[20][20];
//int arr2[20];
//int arr3[20];
cout<<"Enter the number of row : "<<endl;
cin>>r;
cout<<"Enter the number of colume : "<<endl;
cin>>c;
cout<<"Enter the numbers of first row : "<<endl;
int cnt=0;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
    {

    cin>>arr1[i][j];

    }

    cout<<endl;

//
    if(cnt==0){
  cout<<"Enter the numbers of Second row : "<<endl;
     cnt++;
    }

     else if(cnt==1&&r==3){
  cout<<"Enter the numbers of Thired row : "<<endl;
     cnt++;
     }


}


cout<<"Entered Matrix : "<<endl;
for( col=0;col<c;col++){
    for(row=0;row<r;row++)
    {

    cout<<arr1[row][col]<<" ";

    }
cout<<endl;

}

cout<<"Transpose Matrix : "<<endl;
for(int col=0;col<r;col++){
    for(int row=0;row<c;row++)
    {

    cout<<arr1[col][row]<<" ";

    }
cout<<endl;

}



return 0;
}
