#include <iostream>
//Problem: https://www.hackerearth.com/practice/basic-programming/implementation/
//basics-of-implementation/practice-problems/algorithm/fashion-line-1/description/

//TODO dp implementation
#include <string>
using namespace std;

int main()
{
	string s,sp;
	int t,n,k,l,r;
	cin>>t;
	while(t--)
	{
		int count=0;
		cin>>n>>k>>l>>r;
		cin>>s;
		cin>>sp;
		for(int i=0;i<s.size();i++)
		{
			int spchar=0;
			for(int j=i;j<s.size();j++)
			{
				if(sp.find(s[j]) != string::npos)
					spchar++;
				if(spchar>=l && spchar<=r)
					count++;
				if(spchar>r)
					break;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}