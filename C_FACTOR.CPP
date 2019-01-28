#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,a,res=1;
printf("Enter any number:");
scanf("%d",&a);
for(i=1;i<=a;i++){
res=res*i;
}
printf("The factorial of %d is %d",a,res);
getch();
}