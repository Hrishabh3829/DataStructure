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

    @staticmethod
    def text_editor(text, pattern):
        u = Stack()
        r = Stack()

        for i in text:
            u.push(i)

        for i in pattern:
            if i == 'u':
                data = u.pop()
                if data != "stack empty":
                    r.push(data)
            elif i == 'r':
                data = r.pop()
                if data != "stack empty":
                    u.push(data)

        result = ""
        while not u.isempty():
            result = u.pop() + result

        print(result)


L = Stack()
L.text_editor("kolkata", "uu")
