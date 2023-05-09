#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		int b[10000];
		int c[10000]={0};
		for(int i=0;i<a;i++)
		{
			cin>>b[i];
		}
		c[0]=1;
		for(int i=1;i<a;i++)
		{
			int m=0;
			for(int j=0;j<i;j++)
			{
				if(b[i]>b[j])
				{
					if(c[j]>m)
					{
						m=c[j];
					}
				}
			}	
			c[i]=m+1;		
		}
		cout<<c[a-1]<<endl;
	}
}
