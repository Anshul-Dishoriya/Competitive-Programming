#include <iostream>
#include <limits.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

struct MyStack{
	Node *head;
	int size;
	
	Stack(){
		head = NULL;
		size = 0;
	}

	void push(int n){
		Node *temp = new Node(n);
		temp->next = head;
		head = temp;
		size++;
	}

	int pop(){
		if (head==NULL){
			cout<<"Stack is Empty!"<<endl;
			return INT_MAX;
		}
		int val = head->data;
		Node *temp = head;
		head = head->next;
		delete temp;
		size--;
		return val;

	}
	int peek(){
		if (head==NULL){
			cout<<"Stack is Empty!"<<endl;
			return INT_MAX;
		}
		return head->data;
	}	
	int size(){
		return size;
	}
	bool IsEmpty(){
		return head==NULL;
	}
};

// int main(int argc, char const *argv[])
// {
// 	Stack s();
// 	s.push(123);
// 	s.push(234);
// 	s.push(978);
// 	cout<<"Peek Element : "<<s.peek()<<endl;
// 	s.push(144);
// 	s.push(451);
// 	cout<<"Peek Element : "<<s.peek()<<endl;
// 	cout<<"Element Poped : "<<s.pop()<<endl;
// 	cout<<"Peek Element : "<<s.peek()<<endl;
// 	cout<<"Element Poped : "<<s.pop()<<endl;
// 	cout<<"Peek Element : "<<s.peek()<<endl;
// 	cout<<"Is Empty : "<<s.IsEmpty()<<endl;
// 	s.push(340);
// 	s.push(130);
// 	s.push(120);
// 	cout<<"Peek Element : "<<s.peek()<<endl;
// 	cout<<"Is Empty : "<<s.IsEmpty()<<endl;
// 	return 0;
// }
int main()
{
    std::MyStack s;
    // s.push(5);
    // s.push(10);
    // s.push(20);
    // cout<<s.pop()<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.peek()<<endl;
    // cout<<s.IsEmpty()<<endl;
  
    return 0; 
}