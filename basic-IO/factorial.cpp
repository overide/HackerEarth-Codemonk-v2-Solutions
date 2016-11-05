//factorial using DP
#include <iostream>
using namespace std;

int f_arry[15]={1,1};
int fact(int n)
{
	if(n==0 || n==1)
		return f_arry[0];
	else
	{
		for(int i=2;i<=n;i++)
			f_arry[i] = i*f_arry[i-1];
	}
	return f_arry[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n);
}