//program : https://www.hackerearth.com/practice/basic-programming/implementation/
//basics-of-implementation/practice-problems/algorithm/rot13-modified/

#include <iostream>
#include <cstring>
using namespace std;

char Rotn_chiper(int c,int k)
{
	int n = (13+k-1)%26;
	c+=n;
	if (c>122)
		c=(c%122)+96;
	return c;
}

int main()
{
	int t;
	char str[1002];
	int count[26];
	cin>>t;
	while(t--)
	{
		for(int i=0;i<26;i++)
			count[i]=0;
		cin>>str;
		for(int i=0;i<strlen(str);i++)
		{
			int c = str[i];
			c-=97;
			count[c]+=1;
			cout<<(char)Rotn_chiper(str[i],count[c]);
		}
		cout<<endl;
	} 
	return 0;
}