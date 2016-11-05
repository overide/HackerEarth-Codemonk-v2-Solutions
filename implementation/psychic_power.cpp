#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string zeroes="000000";
	string ones="111111";
	cin>>str;
	if(str.find(zeroes) != string::npos || str.find(ones) != string::npos)
		cout<<"Sorry, sorry!";
	else
		cout<<"Good luck!";
	return 0;
}