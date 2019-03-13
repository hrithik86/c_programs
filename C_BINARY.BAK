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
int low=0,high=n-1,mid,pos;
while(low<=high)
	{
		mid=(low+high)/2;
		if(num>arr[mid]){
			low=mid+1;
		}
		else if(num<arr[mid]){
			high=mid-1;
		}
		else{
			ch='y';
			pos=mid;
			break;
		}
	}
if(ch=='y')
printf("Element found at position %d",pos+1);
else{
printf("Element not found");
}
getch();
}