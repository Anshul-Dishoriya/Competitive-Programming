#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1,2,34,14,12,431};
	int *ptr = arr;
	cout<<sizeof(arr)<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<*(arr+2)<<endl;
	return 0;
}