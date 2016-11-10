#include <bits/stdc++.h>
using namespace std;

typedef long long int ull;
ull arr[100100]={0};
int n;
int compare(const void *a,const void *b)
{
	return ((*(int*)a) - (*(int*)b));
}

int binary_search(int start,int end,ull key,int c)
{
	while(start<=end)
	{
		int mid = (start+end)/2;
		cout<<"Mid = "<<mid<<endl;
		if(arr[mid]>=key)
		{
			if(arr[mid]==key)
			{
				if (c==0)
				{
					while(arr[mid-1]>=arr[mid])
						mid--;
				}
				else
				{
					while(arr[mid+1]<=arr[mid])
						mid++;
					mid+=1;
				}
				int count=0;
				for(int i=mid;i<=n;i++)
					count++;
				return count;
			}
			else
				end = mid-1;
		}
		else
		{
			if(arr[mid+1]>key && arr[mid]!=key)
			{
				int count = 0;
				// (c==0)?mid:mid+=1;
				for(int i=mid+1;i<=n;i++)
					count++;
				return count;
			}
			else
				start=mid+1;
		}
	}
	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int c;cin>>n;
	ull q,key;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	qsort(arr,n,sizeof(ull),compare);
	cin>>q;
	while(q--)
	{
		cin>>c>>key;
		cout<<binary_search(1,n,key,c)<<endl;
	}
	return 0;
}