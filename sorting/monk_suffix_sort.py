#Problem : https://www.hackerearth.com/codemonk-sorting/algorithm/monk-and-suffix-sort

string,n = input().split(' ')
n=int(n)
sub_str=[]
for i in range(len(string)):
	sub_str.append(string[i:])
print(sorted(sub_str)[n-1])