#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* insertAtBeg(struct node*head,int val){
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	if(head==NULL){
		head=temp;
		temp->link=NULL;
	}
	else{
		temp->link=head;
		head=temp;	
	}
	return head;
}

struct node* insertAtLoc(struct node*head,int val,int loc){
	int i;struct node*temp1=head;
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	for(i=1;i<loc-1;i++){
		temp1=temp1->link;
	}
	temp->link=temp1->link;
	temp1->link=temp;
	return head;
}

struct node* delAtLoc(struct node*head,int loc){
	int i;struct node*temp=head;struct node*temp1=NULL;
	if(loc==1){
		head=temp->link;
		free(temp);
		return head;
	}
	for(i=1;i<loc-1;i++){
		temp=temp->link;
	}
	temp1=temp->link;
	temp->link=temp1->link;
	temp1->link=NULL;
	free(temp1);
	return head;
}

struct node* revLL(struct node*head){
	struct node*curr=head;
	struct node*prev=NULL,*next=curr->link;
	while(next!=NULL){
		curr->link=prev;
		prev=curr;
		curr=next;
		next=curr->link;
	}
	curr->link=prev;
	head=curr;
	return head;
}

void printLL(struct node*head){
	struct node*temp=head;
	printf("\nLL:");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->link;
	}
}

void main(){
	struct node*head=NULL;
	int ch, more,val,loc;
	do{
		printf("\n\t\tLinked List Operations:");
		printf("\n1.Insert at Beginning\n2.Insert at location\n3.Delete a node\n4.Reverse link list\n5.Print");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nEnter the value to be inserted:");
				scanf("%d",&val);
				head=insertAtBeg(head,val);
				break;
			case 2:
				printf("\nEnter the value to be inserted:");
				scanf("%d",&val);
				printf("\nEnter the location:");
				scanf("%d",&loc);
				head=insertAtLoc(head,val,loc);
				break;
			case 3:
				printf("\nEnter the location:");
				scanf("%d",&loc);
				head=delAtLoc(head,loc);
				break;
			case 4:
				head=revLL(head);
				break;
			case 5:
				printLL(head);
				break;
			default:
				printf("\nEnter a valid choice!!!");
				break;
		}
		printf("\nWant to enter more?(1/0)");
		scanf("%d",&more);
	}while(more==1);
	getch();
}
