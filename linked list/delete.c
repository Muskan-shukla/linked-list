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

//delete at end
void deleend(){
 struct node*s,*temp;
 s=p;
 while(s->link->link!=NULL){
  s=s->link;
 }
 temp=s->link;
 s->link=NULL;
 free(temp);
}
//delete at beg
void delbeg(){
 struct node*temp;
 temp=p;
 p=p->link;
 free(temp);
}
//delete before
void delbefore(){
 struct node*temp,*s;
 s=p;
 int pos;
 int i=0;
 printf("Enter position: \n");
 scanf("%d",&pos);
while(i<pos-1){
 s=s->link;
 i++;
}
temp=s->link;
s->link=temp->link;
free(temp);
}


// Function to traverse the linked list
void print()
{
	struct node* temp;
	if (p == NULL)
		printf("\nList is empty\n");
	else {
		temp = p;
		while (temp != NULL) {
			printf("Data = %d\n", temp->data);
			temp = temp->link;
		}
	}
}
void main(){
 create();
 create();
 create();
 create();
 delend();
 delbeg();
 delbefore();
 print();
}

