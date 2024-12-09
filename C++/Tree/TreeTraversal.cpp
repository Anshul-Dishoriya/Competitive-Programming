#include <iostream>
using namespace std;

struct Node{
	int key;
	 Node * right;
	 Node * left;
	Node(int n){
		key = n;
		left  = NULL;
		right = NULL;
	} 
};

void InOrederTraversal(Node *root){
	if (root!=NULL){
		InOrederTraversal(root->left);
		cout<<root->key<<"  ";
		InOrederTraversal(root->right);
	}
}
void PreOrederTraversal(Node *root){
	if (root!=NULL){
		cout<<root->key<<"  ";
		InOrederTraversal(root->left);
		InOrederTraversal(root->right);
	}
}
void PostOrederTraversal(Node *root){
	if (root!=NULL){
		InOrederTraversal(root->left);
		InOrederTraversal(root->right);
		cout<<root->key<<"  ";
	}
}

int main()
{
	Node *root =new Node(10);
	root->left =new Node(20);
	root->right =new Node(30);

	root->left->left =new Node(40);
	root->left->right =new Node(12);
	root->right->left =new Node(9);
	root->right->right =new Node(145);

	root->left->left->left =new Node(190);
	root->right->left->left =new Node(1);
	cout<<"InOrder Traversal Of Tree : ";
	InOrederTraversal(root);

	cout<<"\nPreOrder Traversal Of Tree : ";
	PreOrederTraversal(root);

	cout<<"\nPostOrder Traversal Of Tree : ";
	PostOrederTraversal(root);
	return 0;
}

					// Tree Will Be Like this

/*
						
						    10
						 /		\
					   /         \
					  /			  \
					20              30
				   / \			  /	  \
				 /	  \ 	     /	   \
				/	   \		/		\
			  40	   12      9 		145
			 / 				  /
			/				 /
		   /				/
		  190			   1	  


*/