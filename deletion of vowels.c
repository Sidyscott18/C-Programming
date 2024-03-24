#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char line[150]="Saveetha School of Engineering";
    int i, j, length = 0;
    length = strlen(line);
    line[i] = tolower(line[i]);
    for (i = 0; i < length; i++)
    {
       
        if ( line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] =='o'  || line[i] == 'u' )
            {
           
            		for (j = i; j < length; j++) 
            			{
              
                			line[j] = line[j + 1];
            			}
            		i--;
            		length--;
            }

        line[length + 1] = '0';
    }

   printf("After Deletion the string will be  : %s", line);
   return 0;
}
