#pragma once

typedef struct Queue Queue;

Queue* createQueue();

int enqueue(Queue* queue, const int value);

int dequeue(Queue* queue);

int front(Queue* queue);

int back(Queue* queue);

int isEmpty(Queue* queue);

void deleteQueue(Queue* queue);

void printQueue(Queue* queue);