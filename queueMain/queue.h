#pragma once

typedef struct QueueElement
{
	int value;
	struct QueueElement* next;
} QueueElement;

typedef struct Queue
{
	QueueElement* front;
	QueueElement* back;
} Queue;

void enqueue(Queue queue, const int value);

void dequeue(Queue queue);

int front(Queue queue);

int back(Queue queue);

int isEmpty(Queue queue);

void deleteQueue(Queue queue);

void printQueue(Queue queue);

