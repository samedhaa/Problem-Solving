'''

Write code to remove duplicates from an unsorted linked list.

Follow up : how would you solve this problem is a temporary buffer is not allower

'''

class Node:
	def __init__(self, val):
		self.val = val
		self.next = None

	def traverse(self):

		node = self

		while node != None:
			print(node.val)
			node = node.next
	## the function that removes the dublicates

	def removeDub(self):

		node = self
		answerNode = self
		mp = {}
		mp[node.val] = True 

		while(node != None):
			
			if node.val not in mp.keys():
				mp[node.val] = True
				answerNode.next = node
				answerNode = answerNode.next		
			else:
				answerNode.next = None

			node = node.next

		return answerNode


node1 = Node(1)
node2 = Node(2)
node3 = Node(3)
node4 = Node(2)
node1.next = node2

node2.next = node3
node3.next = node4


node1 = node1.removeDub()
node1.traverse()



