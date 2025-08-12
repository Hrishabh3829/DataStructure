class Dictonary:

  def __init__(self, size):
    self.size = size
    self.slots = [None] * self.size
    self.data = [None] * self.size

  def put(self, key, value):
    hash_value = self.hash_function(key)

    if self.slots[hash_value] is None:
      self.slots[hash_value] = key
      self.data[hash_value] = value
    else:
      if self.slots[hash_value] == key:
        self.data[hash_value] = value
      else:
        new_hash_value = self.rehash(hash_value)

        while (self.slots[new_hash_value] is not None
               and self.slots[new_hash_value] != key):
          new_hash_value = self.rehash(new_hash_value)

        if self.slots[new_hash_value] is None:
          self.slots[new_hash_value] = key
          self.data[new_hash_value] = value
        else:
          self.data[new_hash_value] = value

  def get(self, key):
    start_position = self.hash_function(key)
    current_position = start_position
    while self.slots[current_position] != None:
      if self.slots[current_position] == key:
        return self.data[current_position]
        current_position = self.rehash(current_position)
        if current_position == start_position:
          return "Not found"
    return "Not found"

  def __setitem__(self, key, value):
    self.put(key, value)

  def rehash(self, old_hash):
    return (old_hash + 1) % self.size

  def hash_function(self, key):
    return abs(hash(key)) % self.size


D = Dictonary(3)
print(D.slots)
print(D.data)

D.put("pyhton", 45)
D.put("java", 54)

print(D.slots)
print(D.data)

print(D.get("pyhton"))
