#include<stdio.h>
int my_Fobonacci(int n)
{
	if(n<=2)	
	   return 1;

	return  my_Fobonacci(n-1)+my_Fobonacci(n-2);
}
int main()
{	
	int n=0;
	printf("Please Enter:");
	scanf("%d",&n);
	printf("F(%d)=%d\n",n,my_Fobonacci(n));
	return 0;
}