#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queuearray.h"

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* s=malloc(sizeof(MyCircularQueue));
    s->max=k;
    s->tail=-1;
    return s;
}

_Bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if(obj->tail < obj->max-1){
        obj->tail++;
        obj->array[obj->tail]=value;
        return true;
    }
    return false;
}

_Bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(obj->tail<0)
        return false;
    obj->tail--;
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if(obj->tail<0)
        return -1;
    return obj->array[0];
  
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if(obj->tail<0)
        return -1;
  return obj->array[obj->tail];
}

_Bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
  return obj->tail==-1;
}

_Bool myCircularQueueIsFull(MyCircularQueue* obj) {
  return obj->tail==obj->max-1;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    
}
void myCircularQueueShow(MyCircularQueue* obj){
	int i=0;
	for(;i<=obj->tail;i++)
		printf("%d\n",obj->array[i]);
}
