'''

write a method to decide if two strings are anagrams or not

'''

# Time Complexity : O(N log N)
# Space Complexity : O(1)

def isAnagrams(array1, array2):

	array1 = sorted(array1)
	array2 = sorted(array2)

	return array1 == array2

