#include<stdio.h>
//VS2012Ĭ�϶�����Ϊ8
# pragma pack()// �޸�Ĭ�϶�������ֻ�ܱ�С�����ܱ��
struct A{

	char a;//�ṹ���е�һ���˱������ÿ��Ƕ���
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
