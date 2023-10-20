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

Queue* createQueue(int* errorCode)
{
	Queue* queue = calloc(1, sizeof(Queue));
	*errorCode = 0;
	if (queue == NULL)
	{
		*errorCode = 1;
	}
	return queue;
}

int enqueue(Queue* queue, const int value)
{
	QueueElement* newQueueElement = calloc(1, sizeof(QueueElement));
	if (newQueueElement == NULL)
	{
		return -1;
	}
	newQueueElement->value = value;
	if (isEmpty(queue))
	{
		queue->head = newQueueElement;
	}
	else
	{
		(queue->back)->next = newQueueElement;
	}
	queue->back = newQueueElement;
	return 0;
}

void dequeue(Queue* queue)
{
	if (isEmpty(queue))
	{
		return;
	}
	QueueElement* queueElementToDequeue = queue->head;
	queue->head = (queue->head)->next;
	free(queueElementToDequeue);
}

int isEmpty(Queue* queue)
{
	return queue->head == NULL;
}

int front(Queue* queue)
{
	return (queue->head)->value;
}

int back(Queue* queue)
{
	return (queue->back)->value;
}

void printQueue(Queue* queue)
{
	QueueElement* current = queue->head;
	while (current != NULL)
	{
		printf("%d ", current->value);
		current = current->next;
	}
}

void deleteQueue(Queue* queue)
{
	while (!isEmpty(queue)) {
		dequeue(queue);
	}
}