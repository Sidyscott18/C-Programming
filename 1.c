`#include <stdio.h> 
int main() 
{ 
int  i; 
int a[5] = { 1, 2, 3, 4, 5 }; 
int b[5] = { 6, 7, 8, 9, 10 }; 
int c[10]={0}; 
for (i = 0; i < 5; i++)  
{ 

c[i] = a[i]; 
c[i+5]=b[i]; 
}
for (i = 0; i < 10; i++)  
{ 
printf("%d ", c[i]);
} 
}

