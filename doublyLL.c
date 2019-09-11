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

struct node* insertAtLoc(struct node* head,int val,int loc){
	if(loc==1){
		return insertAtBeg(head,val);
	}
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node*temp1=head;
	int i;
	temp->data=val;
	for(i=1;i<loc-1;i++){
		temp1=temp1->next;
	}
	temp->next=temp1->next;
	temp1->next->prev=temp;
	temp1->next=temp;
	temp->prev=temp1;
	return head;
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

struct node* delAtLoc(struct node*head,int loc){
	struct node*temp=head; int i;
	if(loc==1){
		head=temp->next;
		temp->next->prev=NULL;
		temp->next=NULL;
		temp->prev=NULL;
		return head;	
	}
	for(i=1;i<loc;i++){
		temp=temp->next;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	temp->next=NULL;
	temp->prev=NULL;
	free(temp);
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

void main(){
	struct node* head=NULL; int more,ch,val,loc;
	do{
		printf("\n1.Insert at beg\n2.Print\n3.Del at End\n4.Insert At Location\n5.Del At Location");
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
			case 4:
				printf("\nEnter the val to be inserted:");
				scanf("%d",&val);
				printf("\nEnter the location:");
				scanf("%d",&loc);
				head=insertAtLoc(head,val,loc);
				break;
			case 5:
				printf("\nEnter the location:");
				scanf("%d",&loc);
				head=delAtLoc(head,loc);
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
