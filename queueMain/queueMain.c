#include "queue.h"

#include <stdio.h>

int main()
{
	Queue q = {.head = NULL, .back = NULL};
	enqueue(q, 5);
	printf("%d", front(q));
	/*enqueue(q, 10);
	printf("%d", front(q));
	dequeue(q);
	printf("%d", front(q));
	dequeue(q);*/
}

