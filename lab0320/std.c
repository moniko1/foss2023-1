#include <stdio.h>

int main()
{
	int a;
	fscanf(stdin, "%d",&a);
	fprintf(stdout,"out:\a%d\n",a);  
	fprintf(stderr, "err:%d\n",a);
	return a;
}
