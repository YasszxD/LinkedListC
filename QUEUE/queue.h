/*             FIFO                  */
struct element{
	int value;
	struct element* next;
};

struct deque{
	struct element* tete;
	struct element* curr;
};

struct deque* create_deque(void);
struct deque* add(struct deque*,int x);
int pop(struct deque*);
struct deque* remove_it(struct deque*);
unsigned int is_empty(struct deque*);
