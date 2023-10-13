<<<<<<< HEAD
﻿#include "queue.h"

#include <stdio.h>
=======
﻿#include <stdio.h>
>>>>>>> 8714fd091412b11820db10b69526c61a63a0ca39

int main()
{
	Queue q = {.front = NULL, .back = NULL};
	enqueue(q, 5);
	printf("%d", front(q));
	/*enqueue(q, 10);
	printf("%d", front(q));
	dequeue(q);
	printf("%d", front(q));
	dequeue(q);*/
}

