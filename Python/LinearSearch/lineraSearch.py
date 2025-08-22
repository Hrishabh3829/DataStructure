def linear_search(arr,item):
  for i in range(len(arr)):
    if arr[i]==item:
      return i
  return -1

arr=[12,43,2,534,4,1,76,6,5,4,675]

print(linear_search(arr,123))

#Time complexity is O(n)