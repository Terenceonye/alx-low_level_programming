#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[10],c[10];
    int i,j,k=0;
    printf("#Keygen by terence\n\n");
    
    while (k <5 || k >=10)
    {
          if (k !=0)
             printf("\nThe username length should be 5 to 10 alphabets\n");
        
         printf("enter username: ");
         scanf("%s",a);
         k = strlen(a);
    }
    
    i = k-1;
    j = 0;
    
    while (i >= 0)
    {
          c[j] = a[i]+i;
          i--;
          j++;
    }
    
    c[j] = 0;
    printf("\nThe password is %s\n",c);
    printf("\nHit Enter to Exit\n");
    getchar();
    getchar();

return 0;
} 
