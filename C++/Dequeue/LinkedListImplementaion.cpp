#include <iostream>
using namespace std;

struct Node(){
	int data;
	Node *next;
	Node *prev;
	Node(data){
		data = data;
		next ,prev =NULL;
	}
};

struct Dequeue(){
	Node *front ;

	void insertRare(Node *head ,data){
		Node *temp = new Node(data);
		temp->prev = head->prev;
		head->prev->next = temp;
		temp->next = head;
		head->prev = temp;
	}
	void insertFront(Node *head ,data){
		Node *temp = new Node(data);
		temp->prev = head->prev;
		head->prev->next = temp;
		temp->next = head;
		head->prev = temp;
		head = temp; 
	}
	void deleteFront(Node *head){
		Node *temp = head;
		head->next

	}

}

int main()
{
	
	return 0;
}