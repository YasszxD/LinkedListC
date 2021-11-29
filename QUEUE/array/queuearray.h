typedef struct MyCircularQueue{
    int array[1000];
    int tail;
    int max;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k);
_Bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);
_Bool myCircularQueueDeQueue(MyCircularQueue* obj);
int myCircularQueueFront(MyCircularQueue* obj);
int myCircularQueueRear(MyCircularQueue* obj);
_Bool myCircularQueueIsEmpty(MyCircularQueue* obj);
_Bool myCircularQueueIsFull(MyCircularQueue* obj);
void myCircularQueueShow(MyCircularQueue* obj);
