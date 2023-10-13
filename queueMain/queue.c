#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int* head;
	int* back;
} Queue;

typedef struct {
	int value;
	int* next;
	int* prev;
};