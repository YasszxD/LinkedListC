#include <stdio.h>
#include <stdlib.h>
#include "LinkedListVoid.h"
#include <stdbool.h>

int main(){
	struct MyLinkedList* head = myLinkedListCreate();
	//printf("%p\n",head);
	myLinkedListAddAtHead(&head,5);
	//printf("%p\t%d\n",head,head->value);
	myLinkedListAddAtTail(head,6);
	myLinkedListAddAtIndex(head,1,12);
	myLinkedListShow(head);
	//printf("%p\t%d\t%d\t%d\n",head,head->value,head->next->value,head->next->next->value);
	myLinkedListDeleteAtIndex(&head,1);
	//printf("%p\t%d\t%d\n",head,myLinkedListGet(head,0),myLinkedListGet(head,1));
	puts(" ");
	myLinkedListShow(head);
	myLinkedListFree(head);
	return 0;
}
