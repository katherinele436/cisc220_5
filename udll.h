union Data {
int i;
int* intP;
float f
float* floatP;
char c;
char* charP;
} Data;
struct Node* getNewNode(union Data data) {
	struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

typedef struct Node Node;

Node *head = NULL;
Node *last = NULL;

void insert(int index, union Data data);

void removes(int index);

union Data get(int index);

int length();
