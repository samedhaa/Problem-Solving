class Node:
	def __init__(self,val):
		self.val = val
		self.next = None

class Stack:

	def __init__(self):
		self.head = None

	def push(self,val):
		if self.head is None:
			self.head = Node(val)
		else:
			node = Node(val)
			node.next = self.head
			self.head  = node

	def pop(self):
		if self.head is None:
			return None
		else:
			self.head = self.head.next

	def top(self):
		return self.head.val
