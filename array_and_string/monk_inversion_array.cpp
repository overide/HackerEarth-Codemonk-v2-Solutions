//Problem : https://www.hackerearth.com/codemonk-arrays-strings/algorithm/monk-and-inversions-arrays-strings/
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t,n,m[21][21];
	cin>>t;
	while(t--)
	{
		cin>>n;
		int inv_count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>m[i][j];
				for(int i1=0;i1<i;i1++)
				{
					for(int j1=0;j1<j;j1++)
					{
						if(m[i1][j1]>m[i][j])
							inv_count++;
					}
				}
			}
		}
		cout<<inv_count<<endl;
	}
	return 0;
}