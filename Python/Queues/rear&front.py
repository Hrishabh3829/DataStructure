from typing import Counter


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
    if self.rear is None:
      self.front = new_node
      self.rear = self.front
    else:
      self.rear.next = new_node
      self.rear = new_node
    return value

  def dequeue(self):
    if self.front is None:
      return 'Empty'
    else:
      removed = self.front.data
      self.front = self.front.next
      if self.front is None:
        self.rear = None
      return removed

  def is_empty(self):
    return self.front == None

  def size(self):
    temp = self.front
    counter = 0
    while temp != None:
      counter += 1
      temp = temp.next
    return counter

  def front_item(self):
    if self.front == None:
      return "empty"
    else:
      return self.front.data

  def rear_item(self):
    if self.front == None:
      return "empty"
    else:
      return self.rear.data

  def traverse(self):
    temp = self.front
    while temp:
      print(temp.data, end=" ")
      temp = temp.next
    print()


# Demo
s = Queue()
s.enqueue(21)
s.enqueue(39)
s.enqueue(40)

print(s.front_item())
print(s.rear_item())
