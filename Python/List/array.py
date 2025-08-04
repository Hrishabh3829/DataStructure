class Stack:
  def __init__(self,size):
    self.size=size
    self.stack= [None]*self.size
    self.top=-1

s=Stack(3)
print(s.stack)