#include<stdio.h>
//VS2012默认对齐数为8
# pragma pack()// 修改默认对齐数，只能变小，不能变大
struct A{

	char a;//结构体中第一个人变量不用考虑对齐
	double b;
	int c;
};

struct B{

	int a1;
	char b1;
	double c1;
	struct A obj;
	struct A *objp;
	struct A objarr[2];
	char *d;
};
int main()
{
	printf("%d %d\n",sizeof(struct A),sizeof(struct B));
	return 0;
}
