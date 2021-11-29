#include "queuearray.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	MyCircularQueue* S = myCircularQueueCreate(8);
	myCircularQueueEnQueue(S, 3);
	myCircularQueueEnQueue(S, 9);
	myCircularQueueEnQueue(S, 5);
	myCircularQueueEnQueue(S, 0);
	puts("\n");
	myCircularQueueShow(S);
	puts("\n");
	myCircularQueueDeQueue(S);
	myCircularQueueDeQueue(S);
	myCircularQueueIsEmpty(S);
	myCircularQueueIsEmpty(S);
	printf("%d\n",myCircularQueueRear(S));
	printf("%d\n",myCircularQueueRear(S));
	myCircularQueueDeQueue(S);
	puts("\n");
	myCircularQueueShow(S);
	puts("\n");
	return 0;
}
