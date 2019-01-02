n,k = map(int, input().split())
c = 'abcdefghijklmnopqrstuvwxyz'
n = n-k
for i in range(k):
	print(c[i],end = '')
for i in range(n):
	if i % 2 == 0:
		print('a',end = '')
	else:
		print('b', end = '')
