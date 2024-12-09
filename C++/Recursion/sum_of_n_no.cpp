#include <iostream>
using namespace std;

int get_sum(int n ,int k=0)
{
	if (n==0){ return k;}

	k = k+n;
	return get_sum(n-1 ,k);

}

int main(int argc, char const *argv[])
{	int n;
	cin>>n;
	cout<<get_sum(n);
	return 0;
}