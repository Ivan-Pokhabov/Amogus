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
	QueueElement* newQueueElement = malloc(sizeof(QueueElement));
	newQueueElement->value = value;
	if (!isEmpty(queue))
	{
		queue.back->next = newQueueElement;
	}
	queue.back = newQueueElement;
}

void dequeue(Queue queue)
{

}

int front(Queue queue)
{
	return queue.head->value;
}

int back(Queue queue)
{
	return queue.back->value;
}