//Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-
//input-output/practice-problems/algorithm/modify-the-string/

/*
			Ascii values: 01000001 A   01100001 a
			here only 5th bit from right is opposite
			so we will toggle this using XOR operation
			First take 1 = 00000001 and left shift it to 5th position ie 00100000
			then XOR it with the character binary value to make it small or caps
			01100001 
			   XOR 
			00100000
			    = 
			01100001
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[105];
	gets(str);
	for(int i=0;i<strlen(str);i++)
		str[i]^=1<<5;
	puts(str);
	return 0;
}