//problem : https://www.hackerearth.com/practice/basic-programming/
//implementation/basics-of-implementation/practice-problems/algorithm/the-great-kian/

#include <iostream>
#define ll long long int
using namespace std;
int main()
{
	long int n;
	ll sum1=0,sum2=0,sum3=0;
	cin>>n;
	for(long int i=0;i<n;i++)
	{
		ll tmp=0;
		cin>>tmp;
		if((i%3)==0)
			sum1+=tmp;
		else if((i%3)==1)
			sum2+=tmp;
		else
			sum3+=tmp;
	}
	cout<<sum1<<" "<<sum2<<" "<<sum3;
	return 0;
}