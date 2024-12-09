#include <iostream>
using namespace std;

struct Node{
	int key;
	Node *left ,*right;
	Node(int x){
		key=x;
		left=right=NULL;
	}
};

Node *getSuccessor(Node *curr){
	curr = curr->right;
	while (curr!=NULL && curr->left!=NULL){
		curr = curr->left;
	}
	return curr;
}

Node *deleteNode(Node *root , int x){
	if (root==NULL) {
		return root;
	}
	else if (root->key>x){
		root->left = deleteNode(root->left , x);
	}
	else if (root->key<x){
		root->right = deleteNode(root->right , x);
	}
	else{
		if (root->left==NULL){
			Node *temp = root->left;
			delete root;
			return temp;
		}
		else if (root->right==NULL){
			Node *temp = root->right;
			delete root;
			return temp;
		}
		else{
			Node *succ = getSuccessor(root);
			root->key = succ->key;
			root->right = deleteNode(root->right , succ->key);

		}
	}
	return root;
}

void inorder(Node *root){
	if (root==NULL) return ;
	inorder(root->left);
	cout<<root->key<<"  ";
	inorder(root->right);
}



int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=15;
	inorder(root);
	cout<<endl;
	root=deleteNode(root,x);
	inorder(root);
}

