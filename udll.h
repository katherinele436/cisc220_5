#ifndef UDLL_H_
#define UDLL_H_

typedef union Data {
int i;
int* intP;
float f;
float* floatP;
char c;
char* charP;
} Data;

typedef struct Node {
	int length;
	union Data data;
	struct Node *next;
	struct Node *previous;
} Node;


Node *head = NULL;
Node *last = NULL;

void insert(int index, union Data data);

void removes(int index);

union Data get(int index);

int length();

#endif /* UDLL_H_ */
