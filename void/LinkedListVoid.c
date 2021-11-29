#include <stdio.h>
#include <stdlib.h>
#include "LinkedListVoid.h"
#include <stdbool.h>


/****************************************************/
int myLinkedListLenght(struct MyLinkedList* obj){
	int i =1;
	while(obj!=NULL){
		i++;
		obj=obj->next;
	}
	return i;
}
/****************************************************/
struct MyLinkedList* myLinkedListCreate(){ return NULL; }
/****************************************************/
void myLinkedListAddAtHead(struct MyLinkedList** obj, int val){
	struct MyLinkedList* temp = malloc(sizeof(struct MyLinkedList*));
	temp->value=val;
	*obj=temp;
}
/****************************************************/
void myLinkedListAddAtTail(struct MyLinkedList* obj, int val){
	struct MyLinkedList* temp = malloc(sizeof(struct MyLinkedList*));
	temp->next=NULL;
	temp->value=val;
	while(obj->next!=NULL)
		obj=obj->next;
	obj->next=temp;
}
/****************************************************/
void myLinkedListAddAtIndex(struct MyLinkedList* obj, int index, int val){
	int lenght = myLinkedListLenght(obj);
	if(obj==NULL||index==0)
		myLinkedListAddAtHead(&obj,val);
	if(index==lenght-1)
		myLinkedListAddAtTail(obj,val);
	if(index>=lenght);
	else{
		struct MyLinkedList* temp = malloc(sizeof(struct MyLinkedList*)),*nextt;
		
		temp->value=val;
		while(index!=1){
			obj=obj->next;
			index--;
		}
		nextt=obj->next;
		obj->next=temp;
		temp->next=nextt;
	}		
}
/****************************************************/
void myLinkedListDeleteAtIndex(struct MyLinkedList** obj, int index){
	if(obj==NULL||index>=myLinkedListLenght(*obj));
	if(index==0)
		*obj=(*obj)->next;
	else{
		struct MyLinkedList* nextt;
		while(index!=1){
			*obj=(*obj)->next;
			index--;
		}
		nextt=(*obj)->next->next;
		free((*obj)->next);
		(*obj)->next=nextt;
	}
}
/****************************************************/
void myLinkedListFree(struct MyLinkedList* obj){
	struct MyLinkedList* temp = malloc(sizeof(struct MyLinkedList*)),*nextt;
	while(obj!=NULL){
		temp=obj;
		obj=obj->next;
		free(temp);
	}
	free(obj);
}
/****************************************************/
int myLinkedListGet(struct MyLinkedList* obj, int index){
	if(obj==NULL||index>=myLinkedListLenght(obj))
		return -1;
	int i=0;
	while(i!=index){
		obj=obj->next;
		i++;
	}
	return obj->value;
}
/****************************************************/
void myLinkedListShow(struct MyLinkedList* obj){
	while(obj!=NULL){
		printf("%p\t%d\n",obj,obj->value);
		obj=obj->next;
	}
	printf("%p\n",obj);
}
/****************************************************/
bool hasCycle(struct ListNode *obj) {
    struct ListNode *fast=head,*slow=head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)  return true ;
    }
     return false;
}
/****************************************************/
struct MyLinkedList* detectCycle(struct MyLinkedList* head) {
    if(head==NULL||head->next==NULL)
        return NULL;
    struct MyLinkedList* fast=head,*slow=head;
    while(fast!=NULL&&fast->next!=NULL){//serach cycle
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
            break;
    }
    if(fast==slow){//cycle found
        slow=head;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast) return fast;}
    return NULL;//no cycle   
}
