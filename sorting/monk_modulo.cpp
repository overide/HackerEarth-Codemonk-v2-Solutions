//Problem : https://www.hackerearth.com/codemonk-sorting/algorithm/monk-and-modulo-based-sorting/

#include <bits/stdc++.h>
using namespace std;
int k;
int compare (const void *a, const void *b)
{
	return ((*((int*)a))%k-(*((int*)b)%k));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long int a[10005];
	int n;cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	qsort(a,n,sizeof(long int),compare);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}