//program : https://www.hackerearth.com/practice/basic-programming/input-output/
//basics-of-input-output/practice-problems/algorithm/find-product/

#include <iostream>
#define ll long long int
using namespace std;

int main()
{
	int n,v;
	ll product;
	cin>>n;
	product = 1;
	while(n--)
	{
		cin>>v;
		product = ((product * v)%(1000000007));
	}
	cout<<product;
	return 0;
}