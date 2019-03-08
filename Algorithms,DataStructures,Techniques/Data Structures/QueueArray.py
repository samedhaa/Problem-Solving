class Queue:
	
	queue = []

	def push(self, val):
		Queue.queue.append(val)

	def pop(self):
		try:
			del Queue.queue[0]
		except:
			print("empty stack!")

	def front(self):
		return Queue.queue[0]


q = Queue()

q.push(1)
q.push(2)

print(q.front())

q.pop()


print(q.front())

