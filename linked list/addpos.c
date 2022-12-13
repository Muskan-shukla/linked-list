#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
}*p;
void create()
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

void insertAtPosition(int data_before)
{
	struct node*temp,*s;
	int data;
	s=p;
	printf("enter data: \n");
	scanf("%d",&data);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	while(s->link->data!=data_before);
	{
	 s=s->link;
 }
temp->link=s->link;
s->link=temp;
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
 int data_before;
printf("enter data before: \n");
 scanf("%d",&data_before);
 create();
 create();
 print();
 insertAtPosition(data_before);
 print();
}

