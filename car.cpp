#include<stdio.h>
struct car
{
  char make[20];
  char model[20];
  int year;
};
int main()
{
  struct car s1={"BMW","S-SERIES", 2000};
  struct car s2={"AUDI","M-SERIES", 2005};
  printf("MAKE:%s\nMODEL:%s\nYEAR:%d\n",s1.make,s1.model,s1.year);
  printf(" _________________________\n");
   printf("\nMAKE:%s\nMODEL:%s\nYEAR:%d\n",s2.make,s2.model,s2.year);
  printf(" _________________________");
  return 0;
}
 

