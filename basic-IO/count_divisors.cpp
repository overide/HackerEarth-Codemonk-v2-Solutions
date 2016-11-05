//Problem : https://www.hackerearth.com/practice/basic-programming/
//input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

#include <iostream>
using namespace std;

int main()
{
	int l,r,k,count,i;
	cin>>l>>r>>k;
	count = 0;
	for(i=l;i<=r;i++)
	{
		if(!(i%k))
			count++;
	}
	cout<<count;
	return 0;
}