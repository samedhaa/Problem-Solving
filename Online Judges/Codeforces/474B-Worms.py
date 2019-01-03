n = int(input())
l = list(map(int,input().split()))
a = []
k = 1
mp = {}
for i in range(n):
	for j in range(k,k+l[i]):
		mp[j] = i+1
	k = k + l[i]
m = int(input())
q = list(map(int,input().split()))
for value in q:
	print(mp[value])
			
