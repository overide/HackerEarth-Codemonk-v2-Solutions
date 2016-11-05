//Problem : https://www.hackerearth.com/codemonk-sorting/algorithm/monk-and-sorting-algorithm/
//This code didn't pass test case 10,11 due to TLE, suggestions for optimization is welcomed  

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
typedef long long int ll;
ll arr[MAX];
int i=1;
static ll zero_count=0,f_count=0;
int extract_digit(ll d)
{
	int r=5*(i-1);
	if(i==1)
		return (d%100000);
	else
		return (int)(d/(pow(10,r)));	
}
int compare(const void *a,const void *b)
{
	f_count++;
	int x = extract_digit(*((int*)a));
	int y = extract_digit(*((int*)b));
	if (x==0 && y==0)
		zero_count++;
	return (x-y);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;cin>>n;
	for(int k=0;k<n;k++)
		cin>>arr[k];
	while(flag)
	{
		qsort(arr,n,sizeof(ll),compare);
		if(zero_count!=f_count)
		{
			for(int l=0;l<n;l++)
			cout<<arr[l]<<" ";
			i++;flag = true;
			cout<<endl;
		}
		else
			break;
	}
	return 0;
}