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
void NodeAtKDistance(Node *root , int k){
	if (root==NULL) return ;
	if (k == 0){
		cout<<root->key<<"  ";
		return ;
	}
	else {
		NodeAtKDistance(root->left , k-1);
		NodeAtKDistance(root->right , k-1);
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

	cout << "Node at K Distance is :- ";
	NodeAtKDistance(root ,2);
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