#include <stdio.h>

int main()
{   int i,l=0;char temp;
    char s[100]="hrithik";
    for(i=0;s[i]!='\0';i++)
    l++;
    l--;
    for(i=0;i<=l/2;i++){
        temp=s[i];
        s[i]=s[l-i];
        s[l-i]=temp;
    }
    
    printf("Reversed string: %s",s);
    return 0;
}
