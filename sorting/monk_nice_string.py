#Problem : https://www.hackerearth.com/codemonk-sorting/algorithm/monk-and-nice-strings-3/ 

n = int(input())
strings=[]
for i in range(n):
	strings.append(input())
 
for i,s in enumerate(strings):
	count=0;j=0
	tmp = sorted(strings[:i+1])
	while(tmp[j] != s):
		count+=1;j+=1
	print(count)