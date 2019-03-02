'''

Write code to reverse a c-style string 

'''

# time complexity : O(N) 
# space complexity : O(1)
def reverse(array):

	i , j = 0 , len(array) - 2

	while(i != j):

		array[i] , array[j] = array[j] , array[i]
		
		i+=1
		j-=1
	
	return array
