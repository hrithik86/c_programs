//binary to decimal conversion
#include <stdio.h>
#include <math.h>
int main()
{
    int num,digit,i=0,res=0;
    scanf("%d",&num);
    while(num!=0){
        digit = num%10;
        res=res+(digit*pow(2,i));
        i++;
        num=num/10;
    }
    printf("%d",res);
    return 0;
}
