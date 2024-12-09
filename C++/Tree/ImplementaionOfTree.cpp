#include <iostream>
using namespace std;

struct Node{
	int key;
	Node * right;
	Node * left;
	Node(int key){
		key = key;
		left = right = NULL;
	} 
};

int main()
{
	Node *root = Node(10);
	root->left = Node(20);
	root->right = Node(30);

	root->left->left =Node(40);
	root->left->right =Node(12);
	root->right->left =Node(9);
	root->right->right =Node(145);

	root->left->left->left =Node(190);
	root->right->left->left =Node(1);

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


* /