#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpOne(const void *a, const void *b)
{
char *p = (char *)a;
char *q = (char *)b;
int m = strlen(p);
int n = strlen(q);

if (m != n)
{
return (m - n);//������������С����
}
else
{
return (*p - *q);//������ĸ������С����
}
}

void main()
{
int i;
char str[5][10];

for (i=0; i<10; i++)
{
scanf("%s", str[i]);
}

qsort(str, 5, 10, cmpOne);

for (i=0; i<10; i++)
{
puts(str[i]);
}
printf("\n");
}