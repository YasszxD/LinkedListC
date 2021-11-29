struct MyLinkedList{
	int value;
	struct MyLinkedList* next; 
};
/****************Prototype****************/
struct MyLinkedList* myLinkedListCreate();
void myLinkedListAddAtHead(struct MyLinkedList** obj, int val);
void myLinkedListAddAtTail(struct MyLinkedList* obj, int val);
void myLinkedListAddAtIndex(struct MyLinkedList* obj, int index, int val);//0-indexed
void myLinkedListDeleteAtIndex(struct MyLinkedList** obj, int index);//0-indexed
void myLinkedListFree(struct MyLinkedList* obj);
int myLinkedListGet(struct MyLinkedList* obj, int index);
int myLinkedListLenght(struct MyLinkedList* obj);//1-indexed
void myLinkedListShow(struct MyLinkedList* obj);
bool hasCycle(struct ListNode *obj);
