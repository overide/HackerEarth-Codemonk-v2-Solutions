//Problem : https://www.hackerearth.com/
//codemonk-arrays-strings/algorithm/monk-and-rotation-3/
#include <iostream>
using namespace std;

int main()
{
	int t;
	long int n,k,A[1000005];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{	
			int j=(i+k)%n;
			cin>>A[j];
		}
		for(int i=0;i<n;i++)
			cout<<A[i]<<" ";
		cout<<endl;
	}
	return 0;
}