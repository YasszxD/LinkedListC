#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main (){
	int i=0;
	struct deque* de= malloc(1*sizeof(struct deque));
	de=create_deque();
	for (i;i<10;i++)
		de=add(de,i);
	while(!is_empty(de)){
		printf("%d\n",pop(de));
		de=remove_it(de);
	}
	return 0;
}
