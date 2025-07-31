class Node:

  def __init__(self, value):
    self.data = value
    self.next = None


class LinkedList:

  def __init__(self):
    #empty linked list
    self.head = None
    #No .of Nodes in the LL
    self.n = 0

  def __len__(self):
    return self.n

  def insert_head(self, value):

    #new node
    new_node = Node(value)

    #create connection
    new_node.next = self.head

    #reassign head
    self.head = new_node

    #increment n
    self.n = self.n + 1

  def __str__(self):
    curr = self.head

    result = ''

    while curr != None:
      result = result + str(curr.data) + '->'
      curr = curr.next
    return result[:-2]

# 1. Write a python program to find the maximum value in a linked list and replace it with a given value.
# Assume that the linked list is populated with whole numbers and there is only one maximum value in the LL.
  
  def replace_max(self, value):
    temp = self.head
    max = temp
    while temp != None:
      if temp.data > max.data:
        max = temp
      temp = temp.next

    max.data = value


L = LinkedList()
L.insert_head(1)
L.insert_head(2)
L.insert_head(3)
L.insert_head(4)
L.insert_head(98)

print(L)
L.replace_max(12)

print(L)
