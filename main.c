/*Anna Teng 10061146
 *Henry Wang 10199252
 *Katherine Le 10188031
 *Marshall Ruse 10066247 
 */

int main() {
	union Data one, two, three, four, ptr;
	one.charData = 'a';
	two.charData = 'b';
	three.charData = 'c';
	four.intData = -10;

	float floatData = 1.23456;
	ptr.floatPtrData = &floatData;

	printf("print the list:\n");
	printList();
	printf("  List Length: %d\n\n", length());

	insert(0, one, CHARDATA);
	printList();
	printf("  List Length: %d\n\n", length());

	insert(1, two, CHARDATA);
	printList();
	printf("  List Length: %d\n\n", length());

	insert(1, three, CHARDATA);
	printList();
	printf("  List Length: %d\n\n", length());

	insert(3, four, INTDATA);
	printList();
	printf("  List Length: %d\n\n", length());

	removeNode(1);
	printList();
	printf("  List Length: %d\n\n", length());

	insert(0, one, CHARDATA);
	printList();
	printf("  List Length: %d\n\n", length());

	removeNode(2);
	printList();
	printf("  List Length: %d\n\n", length());

	insert(3, ptr, FLOATPTRDATA);
	printList();
	printf("  List Length: %d\n\n", length());

	insert(1, two, CHARDATA);
	printList();
	printf("  List Length: %d\n\n", length());

	insert(4, one, CHARDATA);
	printList();
	printf("  List Length: %d\n\n", length());

	char character;
	int number;


	printf("Fetching data from node 1 ...\n");
	character = get(1).charData;
	printf("we got %c\n\n", character);



	printf("Fetching data from node 4 ...\n");
	number = get(4).intData;
	printf("we got %d\n\n", number);

	printf("\n");
}
