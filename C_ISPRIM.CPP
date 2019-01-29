#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int num,i,flag=0;
printf("Enter any number:");
scanf("%d",&num);
if(num==1)
printf("1 is neither prime nor composite");
else{
for(i=2;i<num;i++)
{
	if(num%i==0){
	flag=1;
	break;
	}
}
if(flag==1)
printf("%d is not a prime number",num);
else
printf("%d is a prime number",num);
}
getch();
}
