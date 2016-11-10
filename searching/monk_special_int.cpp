//Problem : https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/
//algorithm/monk-and-special-integer-code-monk/

#include <bits/stdc++.h>
using namespace std;
typedef uint64_t ull;
typedef long long int ll;
#define MAX 100005
ull arr[MAX]={0};
ll n;
bool flag = true;

ll binary_search(ll start,ll end,ull key)
{
	ll k=-1;
	while(start<=end)
	{
		flag = true;
		ll mid = (start+end)/2;
		for(ll i=mid;i<=n;i++)
		{
			if((arr[i]-arr[i-mid])>key)
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			start=mid+1;
			k = mid;
		}
		else
			//sum of subsets of size k is >x so, obviously sum of subsets of size >k will be greater than x.
			//so we need to search subset size <k.
			end = mid-1;
	}
	return k;
} 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ull x;cin>>n>>x;
	for(ll i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i] > x)
			flag = false;
		arr[i]+=arr[i-1];
	}
	if(!flag)
	{
		cout<<"-1"<<endl;
		return 0;
	}

	ll ans = binary_search(1,n,x);
	cout<<ans<<endl;
	return 0;
}