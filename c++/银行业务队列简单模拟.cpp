#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a[1100]={0},b[1100]={0};
	int n,m;int a1=0,b2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		scanf("%d",&m);
		
		if(m%2==1)
		{
			a[a1]=m;
			a1++;
		}
		else
		{
			b[b2]=m;
			b2++;
		}
	}
	int j=0,k=0;
	for(int i=0;i<a1;i++)
	{
		if(j!=0)
		{
			printf(" ");
		}
		printf("%d",a[i]);
		j++;
		if(k<b2)
		if(i%2==1)
		{
			if(j!=0)
			{
				printf(" ");
			}
			printf("%d",b[k]);
			k++;
			j++;
		}
	}
	while(k<b2)
	{
		if(j!=0)
		{
			printf(" ");
		}
		printf("%d",b[k]);
		k++;
		j++;
	}
	
}
