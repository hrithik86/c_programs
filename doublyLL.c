#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
	struct node* prev;
};

struct node* insertAtBeg(struct node* head,int val){
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->prev=NULL;
	if(head==NULL){
		head=temp;
		temp->next=NULL;
		return head;
	}
	temp->next=head;
	head->prev=temp;
	head=temp;
	return head;
}

void printLL(struct node*head){
	struct node*temp=head;struct node*last;
	if(temp==NULL){
		printf("\nList Empty!!");
		return;
	}
	printf("\nTransversal in forward direction:");
	while(temp!=NULL){
		printf("%d ",temp->data);
		last=temp;
		temp=temp->next;
	}
	printf("\nTransversal in reverse direction:");
	while(last!=NULL){
		printf("%d ",last->data);
		last=last->prev;
	}
}

struct node* delAtEnd(struct node*head){
	struct node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	if(temp==head){
		head=NULL;
		free(temp);
		return head;
	}
	temp->prev->next=NULL;
	free(temp);
	return head;
}

void main(){
	struct node* head=NULL; int more,ch,val;
	do{
		printf("\n1.Insert at beg\n2.Print\n3.Del at End");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nEnter the val to be inserted:");
				scanf("%d",&val);
				head=insertAtBeg(head,val);
				break;
			case 2:
				printLL(head);
				break;
			case 3:
				head=delAtEnd(head);
				break;
			default:
				printf("\nEnter a valid choice");
				break;
		}
		printf("\nWant to enter more?(1/0)");
		scanf("%d",&more);
	}while(more==1);	
getch();
}
