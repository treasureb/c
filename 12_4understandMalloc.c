#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	printf("%p\n",&a);
	char *c;
    char *s=malloc(10000*sizeof(char));//malloc一个足够大的数组,暂时储存输入
	printf("%p\n",&s);
	scanf("%s",s);
	c=(char*)malloc(strlen(s)*sizeof(char));
	strcpy(c,s);
	free(s);//输入结束后把输入储存,再把这个大数组释放
	return 0;
}
