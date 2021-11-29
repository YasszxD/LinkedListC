#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main (){
	int i = 1598;
	struct stack* sta=malloc(1*sizeof(struct stack));
	sta = creat_stack();
	while(i!=0){
		sta=push(sta,i%10);
		i/=10;
	}
	while(!is_empty(sta)){
		printf("%d\n",pop(sta));
		sta=remove_last(sta);
	}
	return 0;
}
