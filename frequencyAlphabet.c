#include <stdio.h>

int main()
{   char str[100]; int alp[123],i=0;
    for(i=0;i<123;i++){
        alp[i]=0;
    }
    gets(str);
    for(i=0;str[i]!='\0';i++){
        int m=str[i];
        alp[m]++;
    }
    
     for(i=0;i<123;i++){
        if(alp[i]!=0){
            char ch=i; 
            printf("Frequency of %c = %d \n",ch,alp[i]);    
        }
        
     }
    return 0;
}
