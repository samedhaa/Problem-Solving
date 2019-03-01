class Node:

	ConnectedlinkedlistSize = 0

	def __init__(self, val):
		self.val = val
		self.next = None
		self.prev = None

	def traverse(self):
		node = self # starting from the head node
		while node != None:
			print(node.val)
			node = node.next;

	def traverseDESC(self): # print nodes from the last
		node = self

		def printR(node):
			if node.next == None:
				return

			node = node.next
			printR(node)
			print(node.val)

		printR(node)
		print(self.val) # because in recursion we do the node = node.next
						# before we print and that affects the first value

	def deleteByVal(self, value): ## it deletes by searching for the value 
		node = self
		while node != None: 
			if node.val == value:
				node.prev = None
				node.next = None
				node.val = None
				if node.prev != None:
					node.next.prev = node.prev
				if node.next != None:
					node.prev.next = node.next
				print("Deleted!")
				return

			node = node.next

		print("Value not found! Make sure that you are deleting by the value")

	def deleteByPosition(self, position): ## it deletes the position 
		
		if Node.ConnectedlinkedlistSize < position:
			print("Position is greater than the linkedlist size! the first position starts from 0!")
			return
		node = self
		pos = 0

		while node != None:
			if pos == position:
				node.prev = None
				node.next = None
				node.val = None
				if node.prev != None:
					node.next.prev = node.prev
				if node.next != None:
					node.prev.next = node.next
				print("Deleted!")
				return

			node = node.next
			pos+=1

		print("Error Deleting!")


	def insertToEnd(self, NODE): ## inserting after the last node!
		
		node = self

		while node != None:
			if node.next == None:
				
				node.next = NODE
				NODE.prev = node
				print("Inserted!")
				Node.ConnectedlinkedlistSize+=1
				return


			node = node.next

		print("Error Inserting!")



def main():
	node1 = Node(1)
	node2 = Node(2)
	node3 = Node(3)
	node4 = Node(4)


	print(node1.ConnectedlinkedlistSize)
	
	node1.traverse()
	node1.insertToEnd(node2)
	node1.traverse()


main()