//Program : https://www.hackerearth.com/codemonk-sorting/algorithm/monk-being-monitor

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int height[MAX],counth[MAX];
int compare(const void *a,const void *b)
{
	return ( counth[(*(int*)b)+1] - counth[(*(int*)a)+1] );
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin>>t;
	while(t--)
	{
		int n,dn=0,j=0;cin>>n;
		bool found = false;
		memset(counth,0,sizeof(counth));
		for(int i=0;i<n;i++)
		{
			int tmp;cin>>tmp;
			if(counth[tmp+1]==0)
			{
				dn++;
				height[i]=tmp;
			}
			counth[tmp+1]+=1;
		}
		qsort(height,n,sizeof(int),compare);
		for(int j=0;j<dn-1;j++)
		{
			for(int k=dn-1;k>j;k--)
			{
				if(height[j]>height[k])
				{
					cout<<counth[height[j]+1]-counth[height[k]+1]<<endl;
					found=true;
					break;
				}
			}
			if(found)
				break;
		}
		if(!found)
			cout<<-1<<endl;
	}
	return 0;
}