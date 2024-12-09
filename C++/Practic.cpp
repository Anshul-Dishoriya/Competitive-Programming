#include <iostream>
using namespace std;


int all_divisor(int num1)
{
	int temp;
	for (int i = 2 ; i * i < num1 ; i++)
	{
		if ( num1 % i == 0)
		{
			cout << i << endl;
		
		}
		temp = i;
	}
	for (int i = temp ; i>1; i--)
	{
		if ( num1 % i == 0)
		{
			cout<<num1/i<<endl;
		
		}
		
	}
}

int main(int argc, char const *argv[])
{
	int num1;
	cin >> num1;
	int ans = all_divisor(num1);
	return 0;
}