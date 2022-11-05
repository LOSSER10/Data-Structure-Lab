#include<iostream>
using namespace std;
int main (){
int j;
string conve;

cout<<"Enter a sample string(S) : "<<endl;
getline(cin,conve);
cout<<"Enter a sample integer(j) : "<<endl;
cin>>j;

for(int i=2;i<conve.length();i=i+3){

    if(int(conve[i])!=32){

        conve[i]=char(int(conve[i])+j);
    }
}
cout<<"Your converted string is : "<<endl;
for(int i=0;i<conve.length();i++){
    cout<<conve[i];
}

return 0;
}
