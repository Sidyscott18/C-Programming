#include <stdio.h>
int main()
{
    int i,n=17,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          c=c+1;
        }
    }
    if(c==2)
    {
       printf("The number is PRIME");
    }
    else
    {
       printf("The number is not PRIME");
    }
    return 0;
}

