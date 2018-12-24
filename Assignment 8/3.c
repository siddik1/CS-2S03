//Author: Khizar Siddiqui 400109902
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
	int data;
	struct Node *link;
};

Node *top = NULL;

void Push(int x)
{
	Node *temp = new Node;
	temp->data = x;
	temp->link = top;
	top = temp;
}

void Pop()
{
	Node *temp;
	temp = top;
	top = top->link;
	delete(temp);
}

int IsEmpty() {
	if (top == NULL) {
		return 1;
	}
	return 0;
}

void Print() {
	printf("The stack is: \[");
	Node *temp = top;
	while (temp != NULL) {
		if (temp->link == NULL) {
			printf("%d", temp->data);
		}
		else {
			printf("%d, ", temp->data);
		}
		temp = temp->link;
	}
	printf("\]\n");
}

int Top() {
	Node *temp = top;
	return temp->data;
}

void DeleteMiddle(int n) {
	if (top == NULL) {
		printf("Error, the stack is empty!\n");
	}
	if (top != NULL) {
		Node* temp1 = top;
		if (n == 1) {
			top = temp1->link;
			delete(temp1);
			return;
		}
		for (int i = 0; i < n - 2; i++) {
			temp1 = temp1->link;
		}
		if (temp1->link != NULL) {
			Node* temp2 = temp1->link;
			temp1->link = temp2->link;
			delete(temp2);
		}
	}
}

int Size() {
	Node* temp = top;
	int count = 0;
	while (temp != NULL) {
		count++;
		temp = temp->link;
	}
	return count;
}
int main() {
	puts("Enter your choice: ");
	puts("To push an element into the stack, enter \"push\"");
	puts("To pop an element off the stack, enter \"pop\"");
	puts("To check if the stack is empty, enter \"empty\"");
	puts("To delete the middle element of a stack, enter \"middle\"");
	puts("To exit, enter \"exit\"");

	char input[10];

	while (fgets(input, 10, stdin)) {
		if (strncmp(input, "push", 4) == 0) {
			int data;
			printf("Enter an integer to push onto stack: ");
			scanf("%d", &data);
			Push(data);
			Print();
		}
		else if (strncmp(input, "pop", 3) == 0) {
			if (top == NULL) {
				printf("The Stack is Empty!\n");
			}
			else {
				int x = Top();
				Pop();
				printf("The popped value is %d.\n", x);
				Print();
			}
		}
		else if (strncmp(input, "empty", 5) == 0) {
			if ((IsEmpty() == 1)) {
				printf("The stack is empty.\n");
			}
			if ((IsEmpty() == 0)) {
				printf("The stack is not empty.\n");
			}
		}
		else if (strncmp(input, "middle", 6) == 0) {
			DeleteMiddle((Size() / 2) + 1);
			Print();
		}
		else if (strncmp(input, "exit", 4) == 0) {
			break;
		}
	}
	printf("End of run.");
}
