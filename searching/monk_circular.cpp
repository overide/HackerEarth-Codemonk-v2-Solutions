//https://www.hackerearth.com/practice/algorithms/searching/binary-search/
//practice-problems/algorithm/circular-distance-3/

#include <bits/stdc++.h>
using namespace std;

//typedef uint64_t ull;
int distance(int x, int y)
{
	return ceil(sqrt(pow(x,2)+pow(y,2)));
}

int main()
{
	vector<int> dis;
	int x,y;
	long int r;
	int n,q;cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;cin>>x>>y;
		dis.push_back(distance(x,y));
	}
	sort(dis.begin(),dis.end());
	cin>>q;
	while(q--)
	{
		cin>>r;
		int inside = upper_bound(dis.begin(),dis.end(),r)-dis.begin();
		cout<<inside<<endl;
	}
	return 0;
}