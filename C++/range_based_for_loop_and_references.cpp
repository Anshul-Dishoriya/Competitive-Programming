#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[ ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int &x : arr) {
		x *= 2;

	}
	for (int &x : arr) {
		cout << x << endl;

	}
	return 0;
}