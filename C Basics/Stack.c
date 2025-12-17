//LIFO Structure
//A stack controls data access in a strict order, making it efficient for temporary storage and backtracking problems.
#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int isFull()  {
	return top == MAX - 1;
}
int isEmpty() {
	return top == -1;
}

void push(int x) {
	if (isFull()) {
		printf("Overflow\n");
		return;
	}
	stack[++top] = x;
}

int pop() {
	if (isEmpty()) {
		printf("Underflow\n");
		return -1;
	}
	return stack[top--];
}

int peek() {
	if (isEmpty()) {
		printf("Empty\n");
		return -1;
	}
	return stack[top];
}
void display() {
	if (isEmpty()) {
		printf("Stack is empty\n");
		return;
	}

	printf("Stack elements (top to bottom): ");
	for (int i = top; i >= 0; i--) {
		printf("%d ", stack[i]);
	}
	printf("\n");
}


int main() {
	push(10);
	push(20);
	push(5);
	push(13);

	printf("remove the top element: %d\n", pop());
	printf("view the top element without removing it:%d\n", peek());
	display();
	return 0;
}
//output
//LIFO Structure
//A stack controls data access in a strict order, making it efficient for temporary storage and backtracking problems.
#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int isFull()  {
	return top == MAX - 1;
}
int isEmpty() {
	return top == -1;
}

void push(int x) {
	if (isFull()) {
		printf("Overflow\n");
		return;
	}
	stack[++top] = x;
}

int pop() {
	if (isEmpty()) {
		printf("Underflow\n");
		return -1;
	}
	return stack[top--];
}

int peek() {
	if (isEmpty()) {
		printf("Empty\n");
		return -1;
	}
	return stack[top];
}
void display() {
	if (isEmpty()) {
		printf("Stack is empty\n");
		return;
	}

	printf("Stack elements (top to bottom): ");
	for (int i = top; i >= 0; i--) {
		printf("%d ", stack[i]);
	}
	printf("\n");
}


int main() {
	push(10);
	push(20);
	push(5);
	push(13);

	printf("remove the top element: %d\n", pop());
	printf("view the top element without removing it:%d\n", peek());
	display();
	return 0;
}
// remove the top element: 13
// view the top element without removing it:5
// Stack elements (top to bottom) : 5 20 10
