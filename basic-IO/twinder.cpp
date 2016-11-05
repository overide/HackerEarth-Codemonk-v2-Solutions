//Problem:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/starting-with-twinder/
#include <iostream>
using namespace std;

int main()
{
	int m,n,x,y;
	cin>>m;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		if(x>=m && y>=m)
		{
			
			if(x==y)
				cout<<"ACCEPTED"<<endl;
			else
				cout<<"CROP IT"<<endl;	
		}
		else
			cout<<"UPLOAD ANOTHER"<<endl;
	}
	return 0;
}
