class Node:

  def __init__(self, value):
    self.data = value
    self.next = None


class Queue:

  def __init__(self):
    self.front = None
    self.rear = None

  def __str__(self):
    elements = []
    current = self.front
    while current:
      elements.append(str(current.data))
      current = current.next
    return " -> ".join(elements) if elements else "Empty Queue"

  def enqueue(self, value):
    new_node = Node(value)
    if self.rear == None:
      self.front = new_node
      self.rear = self.front
    else:
      self.rear.next = new_node
      self.rear = new_node
    return value

  def dequeue(self):
    if self.front == None:
      return 'Empty'
    else:
      self.front = self.front.next


s = Queue()
s.enqueue(21)
s.enqueue(39)
s.enqueue(40)
print(s)

s.dequeue()
print(s)