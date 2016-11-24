#include<stdio.h>

int my_sum(int x)
{
	if(0==x)
		return 0;
	else
	return x%10+my_sum(x/10);
}

int main()
{
	int x=0;
	printf("Please Enter Number:");
	scanf("%d",&x);
	printf("%d",my_sum(x));
	return 0;
}