/********** LISTS ***********/
typedef enum {gauche , droite} direction;

struct element {
	int value;
	struct element* next;
};

struct deque {
	struct element* tete;
	struct element* curr;
};

struct deque* creat_list();
int pop(struct deque* ,direction );
struct deque* push(struct deque* ,int ,direction );
struct deque* remove_list(struct deque* ,direction );
unsigned int is_empty(struct deque* );
void show_list(struct deque* d);
