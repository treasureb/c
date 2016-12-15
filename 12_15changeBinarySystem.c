#include<stdio.h>
#include<assert.h>

#pragma warning(disable:4996) 

int bit_set(unsigned char *p_data,unsigned int position,int flag)
{
	assert(p_data);
	assert(position>0&&position<=8);
		if(1==flag)
		{
			*p_data |= (1<<(position-1));
		}
		else
			*p_data &=~(1<<(position-1));
}
int main()
{
	unsigned char ch;
	int position;
	int flag;	
	scanf("%c%d%d",&ch,&position,&flag);
	bit_set(&ch,position,flag);
	printf("%c\n",ch);
	system("pause");
	return 0;
}