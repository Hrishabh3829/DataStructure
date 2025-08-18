class Node:

  def __init__(self, key, value):
    self.key = key
    self.value = value
    self.next = None


class Chaining:

  def __init__(self):
    self.head = None

  def add(self, key, value):
    new_node = Node(key, value)
    if self.head is None:
      self.head = new_node
    else:
      temp = self.head
      while temp.next is not None:
        temp = temp.next
      temp.next = new_node

  def remove(self, key):
    if self.head is None:
      return "Empty"

    if self.head.key == key:
      self.head = self.head.next
      return

    temp = self.head
    while temp.next is not None:
      if temp.next.key == key:
        temp.next = temp.next.next
        return
      temp = temp.next
    return "Not Found"

  def search(self, key):
    temp = self.head
    pos = 0
    while temp is not None:
      if temp.key == key:
        return pos
      temp = temp.next
      pos += 1
    return -1

  def get_node_at_index(self, index):
    temp = self.head
    counter = 0
    while temp is not None:
      if counter == index:
        return temp
      temp = temp.next
      counter += 1
    return None

  def traverse(self):
    temp = self.head
    while temp is not None:
      print(f"{temp.key} --> {temp.value}", end="   ")
      temp = temp.next
    print()

  def size(self):
    temp = self.head
    counter = 0
    while temp is not None:
      counter += 1
      temp = temp.next
    return counter


class Dictionary:

  def __init__(self, capacity):
    self.capacity = capacity
    self.size = 0
    self.buckets = self.make_array(self.capacity)

  def make_array(self, capacity):
    return [Chaining() for _ in range(capacity)]

  def put(self, key, value):
    bucket_index = self.hash_function(key)
    node_index = self.get_node_index(bucket_index, key)

    if node_index == -1:
      self.buckets[bucket_index].add(key, value)
      self.size += 1
      load_factor = self.size / self.capacity
      print("LoadFactor:", load_factor)
      if load_factor >= 2:
        print("Rehashing...")
        self.rehash()
    else:
      node = self.buckets[bucket_index].get_node_at_index(node_index)
      node.value = value

  def rehash(self):
    old_buckets = self.buckets
    self.capacity *= 2
    self.size = 0
    self.buckets = self.make_array(self.capacity)

    for bucket in old_buckets:
      temp = bucket.head
      while temp is not None:
        self.put(temp.key, temp.value)
        temp = temp.next

  def get_node_index(self, bucket_index, key):
    return self.buckets[bucket_index].search(key)

  def hash_function(self, key):
    return abs(hash(key)) % self.capacity

  def traverse(self):
    for i in range(self.capacity):
      print(f"Bucket {i}:", end=" ")
      self.buckets[i].traverse()


D = Dictionary(2)
D.put("python", 45)
D.put("java", 54)
D.put("C", 342)
D.put("ruby", 111)
D.traverse()
