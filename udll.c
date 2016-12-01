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
void insert(int index, union Data data){ //need to be finished
	Node* newNode = getNewNode(data);

	if (head == NULL){ //empty list
		head = newNode;
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

	else if(index == head.length - 1 ){ //add to the end
		Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
			temp->next = newNode;
			newNode->previous = temp;
			head->length = head.length + 1;
	}
	else if (index <= head.length) {//add to middle
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
		head->length = head.length + 1;

	}
	}

}

void removes(int index){ //need to be finished
	Node* deleteNode = getNewNode(data);
	Node* temp = head;
	if (head == NULL){// empty list
		printf("List is empty. Nothing to delete.\n");
	}
	else {
		if (deleteNode == head){ //delete node is the head node
			temp = temp->next;
			temp->length = head->length;
			temp->previous= NULL;
			head = temp;
			head->length = head.length - 1;
		}
		else {// delete node is not the head node
			if(deleteNode->next != NULL){// change next
				deleteNode->next->previous = deleteNode->previous;
			}
			if(deleteNode->previous != NULL){//change previous
				deleteNode->previous->next = deleteNode->next;
			}
		head->length = head.length -1;
		}
	}
	free(deleteNode);
  	return;

}

int length()
{
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
