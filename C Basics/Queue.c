//Queue--FIFO
#include <stdio.h>
#define MAX 100

int q[MAX];
int front = 0, rear = -1, size = 0;

int isFull()  {
	return size == MAX;
}
int isEmpty() {
	return size == 0;
}

void enqueue(int x) {//insert at the rear
	if (isFull()) {
		printf("Overflow\n");
		return;
	}
	rear = (rear + 1) % MAX;
	q[rear] = x;
	size++;
}

int dequeue() {//remove from the front
	if (isEmpty()) {
		printf("Underflow\n");
		return -1;
	}
	int val = q[front];
	front = (front + 1) % MAX;
	size--;
	return val;
}
void display() {
	if (isEmpty()) {
		printf("Queue is empty\n");
		return;
	}

	printf("Queue elements (front to rear): ");
	int i = front;
	for (int count = 0; count < size; count++) {
		printf("%d ", q[i]);
		i = (i + 1) % MAX;
	}
	printf("\n");
}


int getFront() {
	if (isEmpty()) {
		printf("Empty\n");
		return -1;
	}
	return q[front];
}

int main() {
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	printf("%d\n", dequeue());
	printf("%d\n", getFront());
	display();
	return 0;
}
// 10
// 20
// Queue elements (front to rear) : 20 30 40
