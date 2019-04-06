#include<stdio.h>
#include<conio.h>
struct student{
	char name[50];
	int rollno;
	int marks[5];
}s[2];
void main(){
int i,j;
for(i=0;i<2;i++){
	printf("\nStudent %d",i+1);
	printf("\nEnter name:");
	scanf("%s",&s[i].name);
	printf("\nEnter roll number:") ;
	scanf("%d",&s[i].rollno);
	for(j=0;j<5;j++){
		printf("\nEnter marks of subject %d:",j+1);
		scanf("%d",&s[i].marks[j]);
		}
}
for(i=0;i<2;i++){
	printf("Student %d info",i+1);
	printf("\nName: %s",s[i].name);
	printf("\nRollno: %d",s[i].rollno);
		for(j=0;j<5;j++){
			printf("\nMarks in subject %d: is %d",j+1,s[i].marks[j]);
		}
}
getch();
}
