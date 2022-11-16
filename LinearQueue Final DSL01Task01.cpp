#include<iostream>
using namespace std;


int queue[4];
int maxsize=4;
int front=-1;
int rear=-1;

 bool isempty(){
 if( (front==-1) &&(rear==-1)){
      //  cout<<"Yet Empty"<<endl;
    return true;
 }

    return false;
 }

bool isfull(){
if(rear==maxsize-1){
    return true;
 }else{
 return false;
 }
}
void enqueue(int x){
if(isfull()){
    cout<<"The Queue is full you can not add element."<<endl;
}else if(isempty()){
       front=rear=0;
       queue[rear]=x;
       cout<<"First element inserted"<<endl;
 }else{
 rear++;
 queue[rear]=x;
 cout<<"Inserted"<<endl;
 }
}
void dequeue(){
if(isempty()){
    cout<<"The Queue is empty you cannot remove any element."<<endl;
 }else if(front==rear&&front!=-1){
       front=rear=-1;
 }else{
 front++;
 }
}
bool frontelement(){
return queue[front];
}
void showdetails(){
 if(isempty()){
    cout<<"The Queue is empty so nothing to show."<<endl;
 }else{
 for(int i=front;i<=rear;i++){
    cout<<queue[i]<<endl;
   }
  }
}
int main(){

enqueue(1);
enqueue(2);
enqueue(3);
//isempty();
enqueue(4);
enqueue(5);
enqueue(6);
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
enqueue(7);
enqueue(8);
showdetails();


return 0;
}
