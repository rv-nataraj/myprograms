#include <stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("hello.txt","w");
	fprintf(fp,"Hello BIT Sathy");
	fclose(fp);
	return 0;
}
