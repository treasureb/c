#include<stdio.h>

int main()
{
	int a[4]={1,2,3,4};
	int *p=(int*)(&a+1);
	int *q=(int*)((int)a+2);
	printf("%x\n",p[-1]);
	printf("%x\n",*q);
	printf("%d\n",(int)p-(int)q);
	return 0;
}