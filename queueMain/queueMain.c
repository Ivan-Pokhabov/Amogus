#include "queue.h"

#include <stdio.h>

int main()
{
	Queue* queue = createQueue();
	if (queue == NULL)
	{
		printf("ploho");
		return 1;
	}
	enqueue(queue, 5);
	enqueue(queue, 8);
	enqueue(queue, 4);
	dequeue(queue);
	printf("%d, %d\n", front(queue), back(queue));
	printQueue(queue);
	deleteQueue(&queue);
	printQueue(queue);
}