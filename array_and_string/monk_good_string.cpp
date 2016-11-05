#include <iostream>
#include <string>
using namespace std;

int main()
{
	int max_good=0,good=0;
	string s;
	string vowel="aeiou";
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(vowel.find(s[i]) != string::npos)
		{
			good+=1;
			if(good>max_good)
				max_good=good;
		}
		else
		{
			if(good>max_good)
				max_good=good;
			good=0;
		}
	}
	cout<<max_good;
	return 0;
}