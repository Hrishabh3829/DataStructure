import ctypes


class MeraList:

  def __init__(self):
    self.size = 1
    self.n = 0
    #create a C type array with size=self.size

    self.A = self.__make_array(self.size)

  def __len__(self):
    return self.n

  def __str__(self):
    #[1,2,3]
    result = ''
    for i in range(self.n):
      result = result + str(self.A[i]) + ','
    return '[' +result[:-1] + ']'

  def __getitem__(self,index):
    if 0<= index <self.n:
      return self.A[index]
    else: 
      return 'Index Error - Index out of range'

  def append(self, item):
    if self.n == self.size:
      #resize
      self.__resize(self.size * 2)

    #append
    self.A[self.n] = item
    self.n = self.n + 1

  def __resize(self, new_capacity):
    #create a new array with new capacity
    B = self.__make_array(new_capacity)
    self.size = new_capacity
    #copy the content of A to B
    for i in range(self.n):
      B[i] = self.A[i]
    #reAssign A
    self.A = B

  def __make_array(self, capacity):
    #creates a C type array(static,refrential) with size capacity

    return (capacity * ctypes.py_object)()


L = MeraList()
L.append("Hello World")
L.append("3.4")
L.append("True")
L.append("100")

print(L)

L.append('Hey')

print(L)

print(L[2])
