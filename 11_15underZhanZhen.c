#include <stdio.h>
#include <windows.h>

int fun(int x, int y)
{
	int c = 0xcccccccc;
	int *p = &x;//通过修改x的地址，从而修改y的值。
	printf("I am fun function!\n");
	p++;
	printf("before: %x\n", y);
	*p = 0xdddddddd;
	printf("after : %x\n", y);

	return c;
}

int main()
{
	int a = 0xaaaaaaaa;
	int b = 0xbbbbbbbb;
	int ret = fun(a, b);
	printf("you should running here!\n");
	system("pause");
	return 0;
}