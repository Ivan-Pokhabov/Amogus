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
	struct QueueElement* next;
} QueueElement;

void enqueue(Queue queue, const int value)
{
	QueueElement* newElem = malloc(sizeof(QueueElement));
	newElem->value = value;
	if (!isEmpty(queue))
	{
		queue.back->next = newElem;
	}
	queue.back = newElem;
}

void dequeue(Queue queue)
{
	
}