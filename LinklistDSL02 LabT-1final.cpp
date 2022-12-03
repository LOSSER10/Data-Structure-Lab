#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;

};
Node* head;

Node* GetNewNode(int x)
{
	Node* NewNode = new Node();
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}

void InsertAtHead(int x)
{
	Node* NewNode = GetNewNode(x);
	NewNode->next = head;
	head = NewNode;

}

void InserAtTail(int x)
{
	Node* NewNode = GetNewNode(x);
	if (head == NULL)
	{
		head = NewNode;
		return;
	}
	Node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = NewNode;


}

void InserAtAnyPosition(int n, int x)
{
	Node* NewNode = GetNewNode(x);
	if (n == 1)
	{
		NewNode->next = head;
		head = NewNode;
		return;
	}
	Node* temp = head;
	for (int i = 1; i < n - 1; i++)
	{
		temp = temp->next;
	}

	NewNode->next = temp->next;
	temp->next = NewNode;


}

void Delete(int n)
{

	if (head == NULL)
	{
		cout << "Error: Nothing to delete " << endl;
		return;
	}
	Node* temp = head;
	if (n == 1)
	{
		head = temp->next;
		delete temp;
		return;
	}
	for (int i = 1; i < n - 1; i++)
	{
		temp = temp->next;
	}
	Node* temp2 = temp->next;
	temp->next = temp2->next;
	delete temp2;
	return;
}
void DeleteTail()
{
	Node* temp = head;
	Node* temp2 = temp;
	int i = 0;
	while (temp->next != NULL)
	{
		if (i > 0)
		{
			temp2 = temp2->next;
		}
		temp = temp->next;
		++i;
	}
	temp2->next = NULL;
	delete temp;

}
void Display()
{
	Node* temp = head;
	cout << "The List are: ";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;

	}
	cout << endl;
}

void Search(int x)
{
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == x)
		{
			cout << "Found" << endl;
			return;
		}
		temp = temp->next;

	}
	cout << "Not found" << endl;
}

int main()
{
	head = NULL;
	InsertAtHead(50);
	InsertAtHead(20);
	InsertAtHead(70);
	InsertAtHead(80);
	Display();

	InserAtTail(90);
	InserAtTail(100);
	Display();

	InserAtAnyPosition(2, 11);
	Display();
	Delete(50);
	Display();
	Search(80);
	Search(1);
	Delete(100);
	Display();
	DeleteTail();
	Display();
}
