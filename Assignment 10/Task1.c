//Author: Khizar Siddiqui 400109902
#include <stdio.h>
#include <stdlib.h>

struct sNode {
	int data;
	struct sNode* next;
};

struct queue {
	struct sNode* first;
	struct sNode* second;
};

int main()
{
  int no1, no2, no3;
	struct queue* q = (struct queue*)malloc(sizeof(struct queue));
	q->first = NULL;
	q->second = NULL;
  printf("Enter 3 numbers to add to queue\n");
  scanf("%d %d %d", &no1, &no2, &no3);
	enQueue(q, no1);
	enQueue(q, no2);
	enQueue(q, no3);

  printf("Dequeueing ...\n");
	printf("%d ", deQueue(q));
	printf("%d ", deQueue(q));
	printf("%d ", deQueue(q));
}

int enQueue(struct queue* q, int x)
{
	push(&q->first, x);
}

int deQueue(struct queue* q)
{
	int x;

	if (q->second == NULL) {
		while (q->first != NULL) {
			x = pop(&q->first);
			push(&q->second, x);
		}
	}

	x = pop(&q->second);
	return x;
}

int push(struct sNode** top_ref, int new_data)
{
	struct sNode* new_node = (struct sNode*)malloc(sizeof(struct sNode));
	if (new_node == NULL) {
		printf("Stack overflow \n");
		getchar();
		exit(0);
	}

	new_node->data = new_data;

	new_node->next = (*top_ref);

	(*top_ref) = new_node;
}

int pop(struct sNode** top_ref)
{
	int res;
	struct sNode* top;

	if (*top_ref == NULL) {
		printf("Stack underflow \n");
		getchar();
		exit(0);
	}
	else {
		top = *top_ref;
		res = top->data;
		*top_ref = top->next;
		free(top);
		return res;
	}
}
