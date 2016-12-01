union Data {
int i;
int* intP;
float f
float* floatP;
char c;
char* charP;
} Data;
struct Node {
	int length;
	union Data data;
	struct Node *next;
	struct Node *previous;
};

typedef struct Node Node;

Node *head = NULL;
Node *last = NULL;

void insert(int index, union Data data);

void removes(int index);

union Data get(int index);

int length();
