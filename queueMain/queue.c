#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

void enqueue(Queue queue, const int value)
{
	QueueElement* newQueueElement = malloc(sizeof(QueueElement));
	newQueueElement->value = value;
	if (isEmpty(queue))
	{
		queue.front = newQueueElement;
	}
	else
	{
		queue.back->next = newQueueElement;
	}
	queue.back = newQueueElement;
}

void dequeue(Queue queue)
{
	QueueElement* queueElementToDequeue = queue.back;
	queue.back = queue.back->next;
	free(queueElementToDequeue);
}

int isEmpty(Queue queue)
{
	return queue.front == NULL;
}

int front(Queue queue)
{
	return queue.front->value;
}

int back(Queue queue)
{
	return queue.back->value;
}