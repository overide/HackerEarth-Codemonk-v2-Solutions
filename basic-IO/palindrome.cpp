#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[105];
	int i,j;
	gets(str);
	j = strlen(str)-1;
	bool flag = true;
	while(i<j)
	{
		if(str[i] == str[j])
		{
			i++;
			j--;
		}
		else
		{	
			flag = false;
			break;
		}
	}
	(flag == true)?cout<<"YES":cout<<"NO";
	return 0;
}