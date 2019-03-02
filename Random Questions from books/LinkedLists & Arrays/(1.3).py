'''

Design an algorithm and wriate code to remove the duplicate characters in a string without using any additional buffer. 
NOTE: One or two additional variables are fine. 
An extra copy of the array is not
FOLLOW UP : Write the test cases for this method.

'''


# Time Complexity :  O(N ^ 2)
# Space Complexity : O(N) 

def uniqueIt(array):

	answer = []

	for a in array:
		if a not in answer:
			answer.append(a)

	return answer



# test cases
print(uniqueIt([1,2,3,4,5,1,1]))
print(uniqueIt([1,1,1,1,1]))
print(uniqueIt([10]))
print(uniqueIt([10, 20 ,30 ,40 ,10]))