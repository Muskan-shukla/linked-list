#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
}*p;

void insertAtFront()
{
	int data;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);
	temp->data = data;
	temp->link = p;
	p = temp;
}

// Function to traverse the linked list
void print()
{
	struct node* temp;

	// List is empty
	if (p == NULL)
		printf("\nList is empty\n");

	// Else print the LL
	else {
		temp = p;
		while (temp != NULL) {
			printf("Data = %d\n", temp->data);
			temp = temp->link;
		}
	}
}
void main(){
 insertAtFront();
 insertAtFront();
 insertAtFront();
 print();
}

