# Using LL to create stack

class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

class Stack:
    def __init__(self):
        self.top = None

    def isempty(self):
        return self.top is None

    def push(self, value):
        new_node = Node(value)
        new_node.next = self.top
        self.top = new_node

    def peek(self):
        if self.isempty():
            return "stack empty"
        return self.top.data

    def pop(self):
        if self.isempty():
            return "stack empty"
        data = self.top.data
        self.top = self.top.next
        return data

    def traverse(self):
        temp = self.top
        while temp is not None:
            print(temp.data)
            temp = temp.next

    def size(self):
        count = 0
        temp = self.top
        while temp is not None:
            count += 1
            temp = temp.next
        return count

# Adjacency matrix where L[i][j] == 1 means i knows j
L = [
    [0, 0, 1, 1],
    [0, 0, 1, 0],
    [0, 0, 0, 0],  # This person is the celebrity
    [0, 0, 1, 0]
]

def find_the_celeb(L):
    s = Stack()
    for i in range(len(L)):
        s.push(i)

    while s.size() >= 2:
        i = s.pop()
        j = s.pop()
        if L[i][j] == 0:
            # i doesn't know j -> j is not celebrity
            s.push(i)
        else:
            # i knows j -> i is not celebrity
            s.push(j)

    celeb = s.pop()

    for i in range(len(L)):
        if i != celeb:
            if L[i][celeb] == 0 or L[celeb][i] == 1:
                print("No one is a celebrity")
                return
    print("The celebrity is", celeb)

find_the_celeb(L)
