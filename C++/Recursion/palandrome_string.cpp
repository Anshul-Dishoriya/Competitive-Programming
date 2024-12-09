#include <iostream>
#include <string>
using namespace std;

string palandrome(string s ,int start ,int end)
{
	if (s[start] == s[end] )
	{
		if (start==end ||start+1 == end){
			return "True";
		}
		return palandrome(s , start+1 , end-1);
	}
	return "False";
}


int main(int argc, char const *argv[])
{	string s = "asdfgfdsa";
	cout<<palandrome(s,0,8);
	return 0;
}
