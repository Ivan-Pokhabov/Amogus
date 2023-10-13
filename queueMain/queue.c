#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	QueueElement* head;
	QueueElement* back;
} Queue;

typedef struct {
	int value;
	QueueElement* next;
} QueueElement;

int front(Queue queue)
{
	return queue.head->value;
}

int back(Queue queue)
{
	return queue.back->value;
}

void printQueue(Queue queue)
{
	QueueElement* current = queue.head;
	while (current != NULL)
	{
		printf("%d ", (*current).value);
		current = current->next;
	}
}