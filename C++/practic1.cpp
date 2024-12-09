#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v;
	for (int i = 0 ; i < 10 ; i++ ){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}