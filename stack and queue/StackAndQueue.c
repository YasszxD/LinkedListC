#include <stdio.h>
#include <stdlib.h>
#include "StackAndQueue.h"

void show_list(struct deque* d){
	struct element* temp = malloc(sizeof(struct element));
	temp=d->tete;
	//printf("temp: %p  d->tete:%p \n",temp,d->tete);
	while(temp!=NULL)
	{ printf("%d\n",temp->value);temp=temp->next; }
	//printf("temp: %p  d->tete:%p \n",temp,d->tete);
}	


struct deque* creat_list(){
	struct deque* d= malloc(sizeof(struct deque));
	d->tete=NULL;
	d->curr=NULL;
return d;}

int pop(struct deque* d,direction x){
	if(x==gauche)
		return d->tete->value;
	return d->curr->value;
}

struct deque* push(struct deque* d ,int y ,direction x){
	struct element* e= malloc(sizeof(struct element));
	if(is_empty(d)){
		e->value=y;
		e->next=NULL;
		d->tete=e;
		d->curr=e;
		return d;
	}	
	if(x==gauche){
		e->value=y;
		e->next=d->tete;
		d->tete=e;
		return d;
	}
	if(x==droite){
		e->value=y;
		e->next=NULL;
		d->curr->next=e;
		d->curr=e;
		return d;
	}
}
struct deque* remove_list(struct deque* d ,direction x){
	struct deque* d1= malloc(sizeof(struct deque));	
	if(d->tete==NULL||d->tete->next==NULL){
		d1->tete=NULL;
		d1->curr=NULL;
		free(d);
		return d1;}
		
		
	
	if(x==gauche){
		d1->tete=d->tete->next;
		d1->curr=d->curr;
		free(d);
		return d1;
	}

	if(x==droite){
		struct element* temp= malloc(sizeof(struct element));
		temp=d->tete;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
		
		d1->tete=d->tete;
		d1->curr=temp;
		free(d);
		//free(temp);
		return d1;
	}
	else
		return d;
}
unsigned int is_empty(struct deque* d){return d->tete==NULL&&d->curr==NULL;}
