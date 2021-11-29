#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
///head fo9 head awl head hiya lola 

struct stack* creat_stack(){ return NULL; }

struct stack* push(struct stack* s,int x){
	struct stack* new=malloc(1*sizeof(struct stack));
	new->value=x;
	new->next=s;
	return new;
}

int pop(struct stack* s){return s->value;}

unsigned int is_empty(struct stack* s){return s==NULL;}

struct stack* remove_last(struct stack* s){
	struct stack* elem= malloc(1*sizeof(struct stack));
	elem= s->next;
	free(s);
	return elem;
}

