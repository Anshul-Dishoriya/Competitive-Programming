#include <iostream>
using namespace std;

struct Queue{
	int size , cap;
	int *arr;
	Queue(int c){
		cap	= c;
		size = 0;
		arr = new int[cap];
	}

	bool isEmpty(){
		return size==0;
	}

	bool isFull(){
		return size==cap;
	}

	void enque(int x){
		if isFull() return ;
		arr[size] = x;
		size++;
	}
	void deque(){
		if isEmpty() return;
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i+1];
		}
		size--;
	}
	int get_front(){
		if (isEmpty()) {
			return -1;
		}
		return size;
	}

	int get_rare() {
		if (isEmpty()) {
			return -1;
		}
		return size-1;
	}
	

};

int main(  )
{
	
	return 0;
}