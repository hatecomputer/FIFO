#include <stdio.h>
#include <stdlib.h>

struct StackNode {
	int data;
	struct StackNode* link;
};

StackNode* top;

int isEmpty() {
	if (top == NULL) return 1;
	else return 0;
}

void push(int value) {
	StackNode* temp = (StackNode *)malloc(sizeof(StackNode));
	temp->data = value;
	temp->link = top;
	top = temp;
}

void pop() {
	StackNode* temp = top;
	if (isEmpty()) printf("IS EMPTY!!\n\n");
	else {
		top = temp->link;
		free(temp);
	}
}

void test() {
	StackNode* t = top;
	if (isEmpty()) printf("IS EMPTY!! \n\n");
	else {
		printf("VALUE: %d LINK:%d \n\n", t->data, t->link);
	}
}

int main() {
	test();
	push(1); test();
	push(2); test();
	push(3); test();

	pop(); test();
	pop(); test();
}