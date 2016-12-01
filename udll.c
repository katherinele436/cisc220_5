#include <stdio.h>
#include <stdlib.h>
#include “udll.h”

void insert(int index, union Data data){ //need to be finished
	Node *newNode = (Node*) malloc(sizeof(Node));

	if (head = NULL){	
		newNode->length = 1;
		newNode->data = data;
		newNode->next = NULL;
		new Node->previous = NULL;
		head.next = newNode;
		last.previous = newNode;
		return;
	}
	
	if (index == 0) {
		Node *temp = head.next;
		newNode->length = head.length;
		newNode->previous = NULL;
		newNode->data = data;
		head = newNode; 
	}
	
	else if (index == head.length){
		 
	}
		
 
}

void removes(int index){ //need to be finished
}

int length()
{
	return head.data.i
}

union Data get(int index){
	Node *temp;
	int i;
	if (index <= length() / 2) {
		temp = head.next;
		for (int i = 0; i < index; i++){
			temp = temp->next;
		}//end for loop
		return temp->data
	}
	else {
		temp = last.previous;
		for (int i = 0, i < length() - index - 1, i++) {
			temp = temp->previous;
		} //end for loop
		return temp->data;
	}//end if else


	}//end get
