//decimal to binary conversion
#include <stdio.h>
int main()
{   
    int digit,num,bin[100],i=0;
    scanf("%d",&num);
    while(num!=1){
        digit=num%2;
        bin[i]=digit;
        num=num/2;
        i++;
    }
    bin[i]=num;
    while(i>=0){
        printf("%d",bin[i]);
        i--;
    }
    return 0;
}
