#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	printf("%p\n",&a);
	char *c;
    char *s=malloc(10000*sizeof(char));//mallocһ���㹻�������,��ʱ��������
	printf("%p\n",&s);
	scanf("%s",s);
	c=(char*)malloc(strlen(s)*sizeof(char));
	strcpy(c,s);
	free(s);//�������������봢��,�ٰ�����������ͷ�
	return 0;
}
