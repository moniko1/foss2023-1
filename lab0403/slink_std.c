// I edited link.c
// I have edited slink
#include <stdio.h>

int main()
{
	int a;
	fscanf(stdin, "%d",&a);
	fprintf(stdout,"%d\n",a);  
	fprintf(stderr, "%d\n",a);
	return a;
}
