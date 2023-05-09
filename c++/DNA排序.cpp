#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct chuan
{
	char a[51]; 
	int n;
};
int nixu(char s[])
{
	int sum=0;
	for(int i=0;s[i]!='\0';i++)
	{
		for(int j=i+1;s[j]!='\0';j++)
		{
			if(s[i]>s[j])
			{
				sum++;
			}
		}
	}
	return sum;
}
int cmp(const void*a,const void*b)
{
	chuan *p=(chuan*)a;
	chuan *q=(chuan*)b;
	return p->n-q->n;
}
int main()
{
	int m,n;
	cin>>m>>n;
	getchar();
	struct chuan chuans[101];
	for(int i=0;i<n;i++)
	{
		scanf("%s",chuans[i].a);
		chuans[i].n=nixu(chuans[i].a);
	}
	qsort(chuans,n,sizeof(chuan),cmp);
	for(int i=0;i<n;i++)
	{
		printf("%s\n",chuans[i].a);
	}
	
} 
