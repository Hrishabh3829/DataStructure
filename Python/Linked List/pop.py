class Node:
  def __init__(self,value):
    self.data=value
    self.next=None


class LinkedList:
  def __init__(self):
    #empty linked list
    self.head=None
    #No .of Nodes in the LL
    self.n=0


  def __len__(self):
    return self.n

  def insert_head(self,value):

    #new node
    new_node=Node(value)

    #create connection
    new_node.next= self.head

    #reassign head
    self.head=new_node

    #increment n
    self.n=self.n + 1

  def __str__(self):
    curr = self.head

    result=''

    while curr != None:
      result=result + str(curr.data) + '->'
      curr =curr.next
    return result[:-2]

  def append(self,value):

    new_node = Node(value)

    if self.head==None:
      #empty
      self.head=new_node
      self.n=self.n+1
      return 

    curr = self.head
    while curr.next !=None:
      curr =curr.next

    #you are at the last node
    curr.next = new_node
    self.n=self.n+1

  def insert_after(self,after,value):
    new_node = Node(value)
    curr=self.head
    while curr!=None:
      if curr.data== after:
        break
      curr =curr.next
      self.n = self.n + 1
    if curr!=None:
      new_node.next=curr.next
      curr.next=new_node
    else:
      return 'Item not found'

  def clear(self):
    self.head=None
    self.n = 0

  def delete_head(self):
    if self.head==None:
      #empty
      return 'Empty LL'
    self.head=self.head.next
    self.n=self.n -1 


  def pop(self):
    if self.head==None:
      return 'Empty LL'

    curr = self.head

    #check linked list mai 1 item hai?
    if curr.next==None:
      #head hi hoga (delete from head)
      return self.delete_head()

    while curr.next.next != None:
      curr=curr.next
    #curr --> 2nd last node 
    curr.next = None
    self.n = self.n-1


L=LinkedList()
L.insert_head(1)
L.insert_head(2)
L.insert_head(3)
L.insert_head(4)

L.pop()

print(L)
