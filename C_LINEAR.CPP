#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int arr[100],num,n,i;char ch='n';
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter the elements of the array:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the number to be searched:");
scanf("%d",&num);
for(i=0;i<n;i++)
	{
		if(arr[i]==num){
		printf("%d found at position %d \n",num,i+1);
		ch='y';
		}
	}
if(ch=='n')
printf( "Element not found");
getch();
}
