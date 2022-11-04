#include<iostream>
using namespace std;

int stack[5], Top=-1, MaxSize=4;

bool isEmpty()
{
    if(Top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool isFull()
{
    if(Top==MaxSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool push(int element)
{
    if(isFull())
    {
        cout<<"Stack is Full\n"<<endl;
        return false;
    }
    else
    {
        Top++;
        stack[Top] = element;
        return true;
    }
}

bool pop()
{
    if(isEmpty())
    {
        cout<<"Stack is Empty\n"<<endl;
        return false;
    }
    else
    {
        Top--;
        return true;
    }

}

int topElement()
{
    if(isEmpty())
    {
        cout<<"The Stack is Empty!"<<endl;
    }
    else
    {
        cout<<"The Top Element is: " <<stack[Top]<<endl;
    }
}

void show()
{
    if(isEmpty())
    {
        cout<<"The Stack is Empty"<<endl;
        return;
    }
    else
    {
        for(int i=Top; i>=0; i--)
        {
            cout<<stack[i]<<endl;
        }
    }
}

int main()
{
    cout<<"After push the new stack is: "<<endl;
    push(4);
    push(6);
    push(8);
    push(9);
    push(1);
    show();
    isEmpty()
    cout<<endl;
    topElement();
    cout<<endl;
    cout<<"After pop the new stack is: "<<endl;
    pop();
    show();
    topElement();
}
