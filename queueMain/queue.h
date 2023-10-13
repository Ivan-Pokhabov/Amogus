#pragma once

typedef struct QueueElement;

typedef struct Queue;

void enqueue(Queue queue, const int value);

void dequeue(Queue queue);

int front(Queue queue);

int back(Queue queue);

int isEmpty(Queue queue);

void deleteQueue(Queue queue);

void printQueue(Queue queue);

