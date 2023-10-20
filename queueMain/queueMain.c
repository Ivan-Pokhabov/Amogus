#include "queue.h"

#include <stdio.h>

int main()
{
	int errorCode = 0;
	Queue* q = createQueue(&errorCode);
	enqueue(q, 5);
	enqueue(q, 8);
	enqueue(q, 4);
	dequeue(q);
	printQueue(q);
	/*enqueue(q, 10);
	printf("%d", front(q));
	dequeue(q);
	printf("%d", front(q));
	dequeue(q);*/
}

