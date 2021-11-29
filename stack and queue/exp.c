#include <stdio.h>
#include <stdlib.h>
#include "StackAndQueue.h"
int main(){
	struct deque* d = creat_list();
	int i=0;
		push(d,1,gauche);
	show_list(d);
	d=remove_list(d,gauche);
	d=remove_list(d,gauche);
	puts("\n");
	show_list(d);

	return 0;
}

//	8642013579
