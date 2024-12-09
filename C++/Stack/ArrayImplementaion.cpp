#include <iostream>
#include <limits.h>
using namespace std;
struct Stack{
	int *arr;
	int cap;
	int top;
	Stack (int c){
		cap = c;
		arr = new int [cap];
		top =-1;
	}
	void push(int x){
		if (top == cap-1){
			cout<<"Stack Is Full!";
			return;
		}
		top++;
		arr[top] = x;
		
	}

	int pop(){
		if (top==-1){
			cout<<"Stack is Empty!"<<endl;
			return INT_MIN;
		}
		int res = arr[top];
		top--;
		return res;
	}
	int peek(){
		if (top==-1){
			cout<<"Stack is Empty!"<<endl;
			return INT_MIN;
		}
		return arr[top];
	}
	int size(){
		return top+1;
	}

	bool IsEmpty(){
		return top==-1;
	}


};

int main(int argc, char const *argv[])
{
	Stack s(10);
	s.push(123);
	s.push(234);
	s.push(978);
	cout<<"Peek Element : "<<s.peek()<<endl;
	s.push(144);
	s.push(451);
	cout<<"Peek Element : "<<s.peek()<<endl;
	cout<<"Element Poped : "<<s.pop()<<endl;
	cout<<"Peek Element : "<<s.peek()<<endl;
	cout<<"Element Poped : "<<s.pop()<<endl;
	cout<<"Peek Element : "<<s.peek()<<endl;
	cout<<"Is Empty : "<<s.IsEmpty()<<endl;
	s.push(340);
	s.push(130);
	s.push(120);
	cout<<"Peek Element : "<<s.peek()<<endl;
	cout<<"Is Empty : "<<s.IsEmpty()<<endl;
	return 0;
}

