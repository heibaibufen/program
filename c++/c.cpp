#include <iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct zu {
	char a[10];
	struct zu* next1;
	struct zu* next2;
	struct zu* next3;
	struct zu* next4;
}*dr;
void ex(char* a, char* b)
{
	char c;
	c = *b;
	*b = *a;
	*a = c;
}
void zhi(char b[],dr x)
{
	strcpy(x->a, b);
}
void zhi(dr x, char c[])
{
		 c= x->a;
}
void jiedian(dr x)
{	
	int j = 0;
	char b[10];
	zhi(x, b);
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			j = i;
		}
	}
		if (j == 0)
		{	
			zhi(x, b);
			ex(&b[j],&b[1]);
			zhi(b, x->next1);
			zhi(x, b);
			ex(&b[j], &b[3]);
			zhi(b, x->next2);
			x->next3 = NULL;
			x->next4 = NULL;
		}
		if (j == 1)
		{
			zhi(x, b);
			ex(&b[j], &b[0]);
			zhi(b, x->next1);
			zhi(x, b);
			ex(&b[j], &b[2]);
			zhi(b, x->next2); 
			zhi(x, b);
			ex(&b[j], &b[4]);
			zhi(b, x->next3);
			x->next4 = NULL;
		}
		if (j == 2)
		{
			zhi(x, b);
			ex(&b[j], &b[1]);
			zhi(b, x->next1);
			zhi(x, b);
			ex(&b[j], &b[5]);
			zhi(b, x->next2);
			x->next3 = NULL;
			x->next4 = NULL;
		}
		if (j == 3)
		{
			zhi(x, b);
			ex(&b[j], &b[0]);
			zhi(b, x->next1);
			zhi(x, b);
			ex(&b[j], &b[4]);
			zhi(b, x->next2);
			zhi(x, b);
			ex(&b[j], &b[6]);
			zhi(b, x->next3);
			x->next4 = NULL;
		}
		if (j == 4)
		{
			zhi(x, b);
			ex(&b[j], &b[1]);
			zhi(b, x->next1);
			zhi(x, b);
			ex(&b[j], &b[3]);
			zhi(b, x->next2);
			zhi(x, b);
			ex(&b[j], &b[5]);
			zhi(b, x->next3);
			zhi(x, b);
			ex(&b[j], &b[7]);
			zhi(b, x->next4);
		}
		if (j == 5)
		{
			zhi(x, b);
			ex(&b[j], &b[1]);
			zhi(b, x->next1);
			zhi(x, b);
			ex(&b[j], &b[3]);
			zhi(b, x->next2);
			zhi(x, b);
			ex(&b[j], &b[5]);
			zhi(b, x->next3);
			x->next4 = NULL;
		}
		if (j == 6)
		{
			zhi(x, b);
			ex(&b[j], &b[3]);
			zhi(b, x->next1);
			zhi(x, b);
			ex(&b[j], &b[7]);
			zhi(b, x->next2);
			x->next3 = NULL;
			x->next4 = NULL;

		}
		if (j == 7)
		{
			zhi(x, b);
			ex(&b[j], &b[3]);
			zhi(b, x->next1);
			zhi(x, b);
			ex(&b[j], &b[6]);
			zhi(b, x->next2);
			zhi(x, b);
			ex(&b[j], &b[8]);
			zhi(b, x->next3);
			x->next4 = NULL;
		}
		if (j == 8)
		{
			zhi(x, b);
			ex(&b[j], &b[5]);
			zhi(b, x->next1);
			zhi(x, b);
			ex(&b[j], &b[7]);
			zhi(b, x->next2);
			x->next3 = NULL;
			x->next4 = NULL;
		}
}
int shuchu = 0;
int sum(dr x, dr y)
{
	
	jiedian(x);
	char b[10];
	zhi(x->next1, b);
	if (strcmp(b, y->a) == 0)
	{
		shuchu++;
		return 1;
	}
	zhi(x->next1, b);
	if (strcmp(b, y->a) == 0)
	{
		shuchu++;
		return 1;
	}
	zhi(x->next1, b);
	if (strcmp(b, y->a) == 0)
	{
		shuchu++;
		return 1;
	}
	zhi(x->next1, b);
	if (strcmp(b, y->a) == 0)
	{
		shuchu++;
		return 1;
	}
	sum(x->next1, y);
	sum(x->next2, y);
	sum(x->next3, y);
	sum(x->next4, y);
	return 1;
}
int main()
{ 
	zu x, y;
	x = { "123456708" };
	y = { "123456780" };
	sum(&x, &y);
	printf("%d", shuchu);
 }
