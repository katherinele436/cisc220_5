#include <stdio.h>
#include <stdlib.h>
#include “udll.h”

Node* getNewNode(union Data data) {
	Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->previous = NULL;
	newNode->next = NULL;
	return newNode;
}

void insert(int index, union Data data){
	Node* newNode = getNewNode(data);

	if (head == NULL){ //empty list
		head = newNode;
		last = newNode;
		head->length = 1;
		return;
	}
	else if (index == 0) { //add to the beginning
		head->previous = newNode;
		newNode->next = head;
		newNode->length = head.length;
		head = newNode;
		head->length = head.length + 1;

	}
	else if (index == head.length - 1){
		Node* temp = last;
		last = newNode;
		last->previous = temp;
		last->next = NULL;
		head->length = head.length +1;
	}
	else if (index <= (head.length - 1) - 2) {//add to middle
		if (index <= (head.length / 2)){ //closer to beginning
			Node* temp = head;
			Node* temp1;
			int i = 0;
			while (i< index -1){
				temp = temp->next;
				i++;
			}
			temp1 = temp->next;
			temp->next = newNode;
			newNode->previous = temp;
			newNode->next = temp1;
			if (temp1 != NULL){
				temp1->previous = newNode;
			}
		}
		else if(index > ((head.length - 1) / 2)){ //closer to end
			Node* temp = last;
			Node* temp1;
			int i = head.length;
			while (i > index){
				temp = temp->previous;
				i--;
			}
			temp1 = temp->previous;
			temp->previous = newNode;
			newNode->previous = temp1;
			newNode->next = temp;
			temp1->next = newNode;
		}

		head->length = head.length + 1;
	}
	}

void removes(int index){
	if (head == NULL){// empty list
		printf("List is empty. Nothing to delete.\n");
		return;
	}

	if(index == 0){//delete from beginning
		head = head->next;
		head->previous = NULL;
	}
	else if(index == head.length -1){//delete from end
		last = last->previous;
		last->next = NULL;
	}
	else if (index <= ((head.length -1) / 2)){ //closer to beginning
		Node* temp = head;
		Node* before;
		Node* after;
		for(int i = 0; i < index; i++){
			temp = temp->next;
		}
		before = temp->previous;
		after = temp->next;
		before->next = temp->next;
		after->previous = temp->previous;
		free(temp);
	}
	else if (index > ((head.length - 1) / 2)){ //closer to end
		Node* temp = last;
		Node* before;
		Node* after;
		for(int i = head.length - 1; i > index; i--){
			temp = temp->previous;
		}
		before = temp->previous;
		after = temp->next;
		before->next = temp->next;
		after->previous = temp->previous;
		free(temp);
	}
}

int length()
{
	if (head.length == NULL){
	return 0;
	}
	return head.length;
}

union Data get(int index){
	Node *temp;
	int i;
	if (index <= length() / 2) {
		temp = head;
		for (int i = 0; i < index; i++){
			temp = temp->next;
		}//end for loop
		return temp->data;
	}
	else {
		temp = last;
		for (int i = 0; i < length() - index - 1; i++) {
			temp = temp->previous;
		} //end for loop
		return temp->data;
	}//end if else


	}//end get
