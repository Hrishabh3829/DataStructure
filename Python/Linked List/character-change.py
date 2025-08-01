# 4. Given a linked list of characters. Write a python function to return a new string that is created by appending all the characters given in the linked list as per the rules given below.
# Rules

# Replace '*' or '/' by a single space
# In case of two consecutive occurrences of '*' or '/', replace those two occurrences by a single space and
# convert the next character to upper case
# Assume that ->
# There will not be more than two consecutive occurrences of '*' or '/'
# The linked list will always end with an alphabet

# Sample Input
# A,n, *,/,a,p,p,l,e,*,a,/,day, *,*k,e,e,p,s,/, *,a,/,/,d,o,c,t,o,r, *,A,w,a,y
# Expected Output
# An Apple a day Keeps A Doctor Away


class Node:

  def __init__(self, data):
    self.data = data
    self.next = None


class LinkedList:

  def __init__(self):
    self.head = None

  def add(self, value):
    new_node = Node(value)
    if not self.head:
      self.head = new_node
    else:
      curr = self.head
      while curr.next:
        curr = curr.next
      curr.next = new_node

  def __str__(self):
    result = ''
    temp = self.head
    while temp is not None:
      result += str(temp.data)
      temp = temp.next
    return result

  def change_set(self):
    temp = self.head
    while temp != None:
      if temp.data == '*' or temp.data == '/':
        temp.data = ' '

        if temp.next.data=='*' or temp.next.data=='/':
          temp.next.next.data=temp.next.next.data.upper()
          temp.next=temp.next.next
      temp = temp.next


L = LinkedList()
L.add("T")
L.add("h")
L.add("e")
L.add("*")
L.add("/")
L.add("s")
L.add("k")
L.add("y")
L.add("*")
L.add("i")
L.add("s")
L.add("/")
L.add("/")
L.add("b")
L.add("l")
L.add("u")
L.add("e")
L.change_set()
print(L)
