#include<stdio.h>
#include<math.h>
int main()
{
	float a=8,sqart,cube,cuberoot;
	sqart= sqrt(a);
	cube= pow(a,3);
	cuberoot= cbrt(a);
	printf("square root of the number is %.2f\n",sqart);
	printf("cube of the number is %.2f\n",cube);
	printf("cube root of the number is %.2f",cuberoot);
	return 0;
}

