#include <iostream>
using namespace std;

int HCF(int num1, int num2)
{
	int temp = min(num1 , num2);

	while (temp)
	{
		if (num1 % temp == 0 && num2 % temp == 0 )
		{
			return temp;
		}

		temp--;
	}
	return temp;
}

int LCM(int num1, int num2)
{
	int temp = max(num1 , num2);

	while(temp <num1*num2)
	{
		if (temp%num1 == 0 && temp % num2== 0 )
		{
			return temp;
		}

		temp++;
	}
	return temp;
}

int main(int argc, char const *argv[])
{
	int num1 , num2;
	cout << "Enter num1 :  ";
	cin >> num1;

	cout << "Enter num2 :  ";
	cin >> num2;

	// int ans = HCF(num1 ,num2);
	int ans = LCM(num1 , num2);
	cout << ans;
	return 0;
}