'''
1.1 : Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?

'''

# this function  uses N^2 solution with no data structure
# O(1) Space complexity
def isUnique(array):
	
	for i in range(len(array)):
		for j in range(i+1,len(array)):
			if array[i] == array[j]:
				return False

	return True #if there is no 2 charachters equal each other then return true


# this function uses N log(n) solution with no data structure
# simply just sorting charachters
# O(1) Space complexity
def isUniqueFaster(array):
	
	array = sorted(array)

	for i in range(len(array)-1):
		if(array[i] == array[i+1]):
			return False

	return True

# this function uses an external data structure (Hash Map / dictionary(in python))
# to solve the problem in O(N) for time and space.

def isUniqueHMAP(array):
	
	mp = {}

	for a in array:
		mp[a] = 0

	for a in array:
		
		mp[a]+=1

		if mp[a] > 1:
			return False

	return True






