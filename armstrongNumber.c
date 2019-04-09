#include <stdio.h>

int main()
{
    int num,n,digitcube,digit,res=0;
    scanf("%d",&num);
    n=num;
    while(n!=0){
        digit=n%10;
        digitcube=digit*digit*digit;
        res=res+digitcube;
        n=n/10;
    }
    if(res==num){
        printf("%d is an armstrong number",num);
    }
    else printf("%d is not an armstrong number",num);
    return 0;
}
