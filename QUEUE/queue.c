#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
struct deque* create_deque(void){
	struct deque* d = malloc(1*sizeof(struct deque));
	d->tete=NULL;
	d->curr=NULL;
	return d;
}
struct deque* add(struct deque* d,int x){
	struct element* e=malloc(1*sizeof(struct element));
	e->value=x;
	e->next=NULL;
	if(is_empty(d)){
		d->tete=e;
		d->curr=e;
		return d;
	}
	d->curr->next = e;
	d->curr=e;
	return d; 
}

int pop(struct deque* d){ return d->tete->value; }

struct deque* remove_it(struct deque* d){
	struct deque* d1 = malloc(1*sizeof(struct deque));
	if(d->tete==d->curr){
		d1->tete=NULL;
		d1->curr=NULL;
		return d1;
	}
	d1->tete=d->tete->next;
	d1->curr=d->curr;
	free(d);
	return d1;
}
unsigned int is_empty(struct deque* d){return d->tete==NULL&&d->curr==NULL;}
