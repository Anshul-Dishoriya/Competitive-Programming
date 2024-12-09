#include <iostream>
using namespace std;

int N_to_1(int n)
{	
	if(n<1)
	{
		return 0;
	} 
	// cout<<n<<endl;
	// return N_to_1(n-1); N to 1
	N_to_1(n-1); //1 to N
	cout<<n<<endl;

}

int main(int argc, char const *argv[])
{
	N_to_1(10);
	return 0;
}