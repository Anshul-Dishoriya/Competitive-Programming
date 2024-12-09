#include <iostream>
using namespace std;

struct Node{
	int data;
	Queue *next;
	Node(int data ){
		data = data;
		next=NULL;
	}
};


struct Queue{
	Node *front , *rare;
	Queue(){
		front = rare = NULL;
	}


	void enque(x){
		Node *temp = Node(x);
		if (front==NULL){
			front = rare = temp;
		}
		rare->next = temp;
		rare = temp;
	}

	void deque(){
		if (front == NULL) return ;
		Node *temp = front;
		front = front->next;
		if (fornt==NULL) {rare=NULL;}
		delete temp;
	}

	int get_front(){
		if (front == NULL) return;
		return fornt->data;
	}

	int get_rare(){
		if (front == NULL) return;
		return rare->data;
	}
};