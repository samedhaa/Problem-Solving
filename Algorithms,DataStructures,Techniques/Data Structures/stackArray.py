class stack:

	stackArr = []

	def push(self, val):
		stack.stackArr.append(val)

	def pop(self):
		try:
			del stack.stackArr[len(stack.stackArr)-1]
		except:
			print("empty stack!")

	def top(self):
		try:
			print(stack.stackArr[len(stack.stackArr)-1])
		except:
			print("empty stack!")

	def isEmpty(self):
		if len(stack.stackArr) == 0:
			return True
		return False
