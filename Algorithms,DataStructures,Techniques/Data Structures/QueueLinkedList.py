class Node:
	def __init__(self,val):
		self.val = val
		self.next = None

class Queue:

	def __init__(self):
		self.head = None

	def push(self,val):
		if self.head is None:
			self.head = Node(val)
		else:
			node = self.head
			while True:
				if node != None:
					node.next = Node(val)
					return;

				node = node.next		

	def pop(self):
		if self.head is None:
			return None
		else:
			self.head = self.head.next

	def front(self):
		return self.head.val

