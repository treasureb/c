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
return (m - n);//按串长排序，由小到大
}
else
{
return (*p - *q);//按首字母排序，由小到大
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