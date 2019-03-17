/* 
c program to find day on a given date
*/

#include<stdio.h>

int mnDays[13]={0,31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
char day[7][100]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};

int leapYears(int y,int m)
{
    if(m<=2)
    y--;
    return ((y/4)-(y/100)+(y/400));
}

int main()
{
	    int d,m,y,i;
	    scanf("%d %d %d",&d,&m,&y);
	    long long totalDays=(y*365)+d;
	    for(i=1;i<m;i++)
	    totalDays+=mnDays[i];
	    totalDays+=leapYears(y,m);
	    int rem=(totalDays)%7;
	    printf("%s",day[rem]);
	return 0;
}