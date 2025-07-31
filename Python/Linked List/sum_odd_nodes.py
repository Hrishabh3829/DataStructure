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

  def sum_odd_nodes(self):
    temp=self.head
    counter=0
    result=0
    while temp !=None:
      if counter % 2 != 0:
        result=result+temp.data      

      counter+=1

      temp=temp.next
    print(result)



L = LinkedList()
L.insert_head(1)
L.insert_head(2)
L.insert_head(3)
L.insert_head(4)
L.insert_head(98)

print(L)
L.sum_odd_nodes()

