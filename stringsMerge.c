//merging 2 strings
#include <stdio.h>
#include <string.h>

int findLength(char a[100]){
    int l=0;
    for(int i=0;a[i]!='\0';i++)
    l++;
    return l;
}

int main()
{   char str1[100],str2[100]; int i,j;
    gets(str1);
    int l1=findLength(str1);
    gets(str2);
    int l2=findLength(str2);
    for(i=l1,j=0;i<l1+l2,str2[j]!='\0';i++,j++){
        str1[i]=str2[j];
    }
    printf("%s",str1);
    return 0;
}
