#include <cstdio>
#include <vector>
using namespace std;
#define LLI long long int
#define MAX 1000005
LLI cost_vec[MAX];
// LLI sum_vec[MAX]={0};

int main()
{
	int testc;
	scanf("%d",&testc);
	while(testc--)
	{
		LLI n,x,sum,start=0;
		scanf("%lld %lld",&n,&x);
		for(LLI i=0;i<n;i++)
			scanf("%lld",&cost_vec[i]);

		bool status = false;
		sum = cost_vec[0];
		for(LLI j=1;j<n;j++)
		{
			while(sum>x)
			{
				sum-=cost_vec[start];
				start++;
			}
			if(sum == x)
			{
				status = true;
				break;
			}
			sum+=cost_vec[j];
		}
		//if last friend comes in range!
		while(sum>x)
		{
			sum-=cost_vec[start];
			start++;
		}
		if(sum == x)
		{
			status = true;
			break;
		}
		if(status)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}