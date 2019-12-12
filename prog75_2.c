#include <stdio.h>
int main()
{
	int a,b,c,d,e,x,y,z;
	a=20; b=40; c=60; d=80; e=b+c;
	x=a+b/c*d+e;
	y=b/a+d/c+e;
	z=a+b-c*d+e;
	printf("\n %d %d %d",x,y,z);
	return 0;

}
