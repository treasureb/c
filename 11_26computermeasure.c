#include<stdio.h>

int checkSystem()
{
	int v=1;
	if(*((char *)&v)==1)
		return 1;
	else
		return 0;
}

int main()
{
	printf("%d\n",checkSystem());
	return 0;
}