from typing import Counter


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

  def reverse(self):
    prev_node=None
    curr_node=self.head
    while curr_node!= None:
      next_node=curr_node.next
      curr_node.next=prev_node
      prev_node=curr_node
      curr_node=next_node
    self.head=prev_node

L = LinkedList()
L.insert_head(1)
L.insert_head(2)
L.insert_head(3)
L.insert_head(4)
L.insert_head(98)
print(L)
L.reverse()
print(L)


