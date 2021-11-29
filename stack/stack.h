struct stack{
	int value;
	struct stack* next;
};

int pop(struct stack* s);
struct stack* push(struct stack* s,int x);
unsigned int is_empty(struct stack* s);
struct stack* creat_stack(void);
struct stack* remove_last(struct stack* s);
