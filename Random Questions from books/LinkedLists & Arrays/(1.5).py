'''

write a method to replace all spaces in a string with ‘ 20’

'''

def changeSpace(str):

	str = list(str)
	for i in range(len(str)):
		if(str[i] == ' '):
			str[i] = '%20'

	return "".join(str)

