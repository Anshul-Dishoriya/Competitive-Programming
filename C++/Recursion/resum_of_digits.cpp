#include <iostream>
using namespace std;

int sum_of_digit(int n ,int k=0)
{
	if (n==0)
	{
		return k;
	}
	k = k+n%10;
	return sum_of_digit(n/10 ,k);
}

int main(int argc, char const *argv[])
{
	int n; 
	cin>>n;
	cout<<sum_of_digit(n);


	return 0;
}