#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node* next;
}* start=NULL;

void ins_beg(int info){
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=info;
	if(start==NULL){
		start=temp;
		temp->next=start;
	}
	else{
		struct node*temp1=start;
		while(temp1->next!=start){
			temp1=temp1->next;
		}
		temp->next=start;
		start=temp;
		temp1->next=temp;
	}
}

void del_end(){
	if(start==NULL){
		printf("\nUnderflow!!");
		return;
	}
	struct node*temp1=start,*pre=start;
	while(temp1->next!=start){
		pre=temp1;
		temp1=temp1->next;
	}
	if(start==temp1){
		start=NULL;
		free(temp1);
		return;
	}
	pre->next=start;
	free(temp1);
}

void printLL(){
	if(start==NULL){
		printf("\nempty list");
		return;
	}
	struct node*temp=start;
	printf("LL: ");
	while(temp->next!=start){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}

void main(){
	int ch1,x;
	do{
		printf("\n1.Insert At Beginning\n2.Del At End\n3.Print\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch1);
		switch(ch1){
			case 1 :
				printf("\nEnter element:");
				scanf("%d",&x);
				ins_beg(x);
				break;
			case 2:
				del_end();
				break;
			case 3:
				printLL();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("\nEnter a valid choice!!");
				break;
			}
	}while(1);
	getch();	
}

