def is_Sorted(arr):
  sorted = True

  for i in range(len(arr) - 1):
    if arr[i] > arr[i + 1]:
      sorted = False

  return sorted


arr = [1, 2, 3, 4, 5, 6]
print(is_Sorted(arr))
arr = [1, 2, 3, 8, 32, 54, 21, 65]
print(is_Sorted(arr))
