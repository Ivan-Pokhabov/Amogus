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
	QueueElement* prev;
} QueueElement;

int front(Queue queue)
{
	return queue.head->value;
}

int back(Queue queue)
{
	return queue.back->value;
}