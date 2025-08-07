class Node:

  def __init__(self, value):
    self.data = value
    self.next = None


class Queue:

  def __init__(self):
    self.front = None
    self.rear = None

  def enqueue(self, value):
    new_node = Node(value)
    if self.rear == None:
      self.front = new_node
      self.rear = self.front
    else:
      self.rear.next = new_node
      self.rear = new_node
    return value

s=Queue()

print(s.enqueue(21))