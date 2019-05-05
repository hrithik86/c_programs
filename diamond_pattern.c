/*Diamond pattern in c
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/
#include <stdio.h>

int main()
{int i,j,k;
    for(i=1;i<=5;i++){
        for(k=5-i;k>0;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=4;i>0;i--){
        for(k=0;k<=4-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
