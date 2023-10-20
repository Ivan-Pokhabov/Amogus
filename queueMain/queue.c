#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct QueueElement
{
	int value;
	struct QueueElement* next;
} QueueElement;

struct Queue
{
	QueueElement* head;
	QueueElement* back;
};

Queue* createQueue(void)
{
	return calloc(1, sizeof(Queue));
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

int dequeue(Queue* queue)
{
	if (isEmpty(queue))
	{
		return -1;
	}
	QueueElement* queueElementToDequeue = queue->head;
	queue->head = (queue->head)->next;
	free(queueElementToDequeue);
	if (isEmpty(queue))
	{
		queue->back = NULL;
	}
	return 0;
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
	if (queue == NULL)
	{
		return;
	}
	QueueElement* current = queue->head;
	while (current != NULL)
	{
		printf("%d ", current->value);
		current = current->next;
	}
}

void deleteQueue(Queue** queue)
{
	while (!isEmpty(*queue)) 
	{
		dequeue(*queue);
	}
	free(*queue);
	*queue = NULL;
}