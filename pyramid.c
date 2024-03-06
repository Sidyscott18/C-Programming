#include<stdio.h>
int main()
{
    int i,j,k,rows=4;
    for(i=0;i<=rows;i++)
    {
       for(j=0;j<=rows-i;j++)
        {
          printf("  ");
        }
          for(k=1;k<=2*i-1;k++)
        {
         printf("* ");
        }
          printf("\n");
    }
    return 0;
}
