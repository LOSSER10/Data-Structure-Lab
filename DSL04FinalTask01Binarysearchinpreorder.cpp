
#include<iostream>
using namespace std;
 
struct Node {
	char data;
	 Node *left;
	Node *right;
};


void Preorder(struct Node *root) {

	if(root == NULL) return;
      cout<<root->data;

	Preorder(root->left);     
	Preorder(root->right);    
}



Node* Insert(Node *root,int  data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data < root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}
 
int main() {

	Node* root = NULL;
	root = Insert(root,'5');
	 root = Insert(root,'2');
	root = Insert(root,'3');
	 root = Insert(root,'8'); 
	root = Insert(root,'1');
	 root = Insert(root,'6');

	cout<<"In Form Of Preorder: ";
	Preorder(root);

}
