#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct zu{
    int m;
	struct zu* next; 
}*dr;
int main()
{
    int m,n;
    cin>>m>>n;
    dr x,qi;
    x=new zu;
    x->next=NULL;
    qi=x;
    for(int i=1;i<=m;i++)
    {
    	dr y;
    	y=new zu;
    	y->m=i;
    	x->next=y;
    	x=x->next;
	}
	x->next=qi->next;
	for(int i=1;;i++)
	{
		dr shan;
		shan=qi;
		qi=qi->next;
		if(i%n==0)
		{
			printf("%d ",qi->m);
			shan->next=shan->next->next;	
		}
		if(qi->m==qi->next->m)
		{
			printf("%d\n",qi->m);
			break;
		}
		
	}
}
