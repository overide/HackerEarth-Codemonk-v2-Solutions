#include <cstdio>
#include <algorithm>
#define ll long long int
#define MAX 100005
using namespace std;

ll tower[MAX];
int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

int main()
{
	int t,h;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&h);
		for(int i=0;i<h;i++)
			scanf("%lld",&tower[i]);
		qsort(tower,h,sizeof(ll),compare);
		for(int i=0;i<h;i++)
			printf("%lld ",tower[i]);
		printf("\n");
	}
	return 0;
}