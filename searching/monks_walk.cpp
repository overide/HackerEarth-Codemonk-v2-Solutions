//Problem : https://www.hackerearth.com/practice/algorithms/searching/
//linear-search/practice-problems/algorithm/monk-takes-a-walk/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;cin>>t;
    string str;
    string vowel="AEIOUaeiou";
    while(t--)
    {
    	cin>>str;
    	int count=0;
    	for(int i=0;i<str.size();i++)
    	{
    		if(vowel.find(str[i])!= string::npos)
    			count++;
    	}
    	cout<<count<<endl;
    }
    return 0;
}