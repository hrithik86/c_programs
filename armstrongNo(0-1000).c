#include <stdio.h>

int main()
{
    int num,n,digitcube,digit;
    for(num=0;num<1000;num++){
        int res=0;
        n=num;
        while(n!=0){
            digit=n%10;
            digitcube=digit*digit*digit;
            res=res+digitcube;
            n=n/10;
        }
        if(res==num){
            printf("%d is an armstrong number\n",num);
        }    
    }
    
    
    return 0;
}
