#include<stdio.h>
struct A{
	int a;
	char b;
	double c;
	char arr[7];
}obj={
	10,
	 'a',
	 8,
	{"abcdef"},
};
union B{
	int a;
	char b;
	double c;
}obj1;

struct C{
	unsigned  ch   :2;
	unsigned  font :6;
	unsigned  size :19;
}obj3;
int main()
{	int i=0;
	obj3.ch=4;
	printf("%d\n",obj.a);
	printf("%c\n",obj.b);
	printf("%lf\n",obj.c);
	for(;i<6;i++)
	{
	printf("%c\n",obj.arr[i]);
	}
	printf("%d\n",sizeof(obj));
	printf("%d\n",sizeof(obj1));
	printf("%d\n",sizeof(obj3));
	printf("%d\n",obj3.ch);//ch只开辟了两个字节，4的二进制位100，所以打印后两位
	return 0;
}