#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

struct QueueElement
{
	int value;
	struct QueueElement* next;
};

struct Queue
{
	QueueElement* head;
	QueueElement* back;
};

void enqueue(Queue queue, const int value)
{
	QueueElement* newQueueElement = malloc(sizeof(QueueElement));
	newQueueElement->value = value;
	if (isEmpty(queue))
	{
		queue.head = newQueueElement;
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
	return queue.head == NULL;
}

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