#include<iostream>
using namespace std;


struct employee{

int id;
int salary;
int year;
string dept;


};
int main(){

int x=10;

struct employee record[x];
for(int i=0;i<10;i++){

    cout<<"Give "<<i+1<<" employee information : "<<endl;
    cout<<"Enter your id : "<<endl;
    cin>>record[i].id;

    cout<<"Joining year : "<<endl;
    cin>>record[i].year;

    cout<<"Salary : "<<endl;
    cin>>record[i].salary;


    cout<<"Printed all the employees ID who has joined before 2009 or salary more than 20,000 :" <<endl;
    for(int i=0;i<10;i++){
        if(record[i].year<2009||record[i].salary>20000){

        cout<<record[i].id<<" "<<endl;
    }

  }

}
return 0;



}
