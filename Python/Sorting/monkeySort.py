import random


def is_Sorted(arr):
  for i in range(len(arr) - 1):
    if arr[i] > arr[i + 1]:
      return False
  return True


def monkey_sort(arr):
  attempts = 0
  while not is_Sorted(arr):
    random.shuffle(arr)
    attempts += 1
  print("Sorted array:", arr)
  print("Attempts:", attempts)


monkey_sort([23, 14, 11, 67, 43, 54])
