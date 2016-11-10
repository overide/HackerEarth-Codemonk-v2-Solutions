//problem : https://www.hackerearth.com/practice/algorithms/searching/binary-search/
//practice-problems/algorithm/little-monk-and-mountains/description/

#include <iostream>
using namespace std;
#define MAX 100005
uint64_t lowerh[MAX],irange[MAX];

int binary_search(int start,int end,uint64_t key)
{
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(irange[mid]<=key)
		{
			if(irange[mid]==key)
				return mid;
			else if(irange[mid+1]>=key)
				return mid+1;
			else
				start=mid+1;
		}
		else if(irange[mid]>key)
			end=mid-1;
	}
	return 0;
}
int main()
{
	int n,q;cin>>n>>q;
	uint64_t l,r,x;
	for(int i=0;i<n;i++)
	{
		cin>>l>>r;
		lowerh[i]=l;
		if(i==0)	
			irange[i]=(r-l)+1;
		else
			irange[i]=irange[i-1]+((r-l)+1);
	}
	while(q--)
	{
		int i;
		uint64_t v;
		cin>>x;
		i = binary_search(0,n-1,x);
		if(i==0)
			v = lowerh[i]+ (x-1);
		else
			v = lowerh[i]+((x-irange[i-1])-1);
		cout<<v<<endl;
	}
	return 0;
}