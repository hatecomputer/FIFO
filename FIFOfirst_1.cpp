#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

int Stack[STACK_SIZE];
int top = -1;

int isFull() {
	if (top == STACK_SIZE - 1) 
		return 1;
	else
		return 0;
}

int isEmpty() {
	if (top == -1) {
		return 1;
	}
	else
		return 0;
}

void push(int value) {
	if (isFull()) {
		printf("IS FULL!!\n");
		return;
	}
	else {
		Stack[++top] = value;
	}
}

int pop() {
	if (isEmpty()) {
		printf("IS EMPTY!!\n");
		return 0;
	}
	else {
		printf("%d is gone\n",Stack[top]);
		return Stack[top--];
	}
}

void test() {
	if (isEmpty()) {
		printf("IS EMPTY!!\n");
	}
	else {
		printf("top : %d   Stack_value:%d\n",top,Stack[top]);
	}
}

void main(void) {
	test();
	push(1); test();
	push(2); test();
	push(3); test();

	pop(); test();
	pop(); test();
}