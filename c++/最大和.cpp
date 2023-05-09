#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int num[5000][5000]={0}; 
int c[51000];
int zhi(int m,int n)
{
	if(m==n)
	{
		return c[n];
	}
	else
	{
		if(num[m+1][n]==0)
		{
			num[m+1][n]=zhi(m+1,n);
		}
		return num[m+1][n]+c[m];	
	}	
} 
int main()
{
	int a;
	scanf("%d",&a);
	while(a--)
	{
		int b;
		scanf("%d",&b);
        memset(c,0,50000);
		for(int i=0;i<b;i++)
        {
            scanf("%d",&c[i]);
		}
		int sum=-100000;
		for(int i=0;i<b;i++)
		{
			int p=-10000,q=-11000;
			for(int j=0;j<=i;j++)
			{
				if(p<zhi(j,i))
				{
					p=zhi(j,i);
				}
			}
			for(int k=i+1;k<b;k++)
			{
				for(int r=k;r<b;r++)
				{
					if(q<zhi(k,r))
					{
						q=zhi(k,r);
					}
				}
			}
			if(sum<p+q)
			{
				sum=p+q;
			}
		}
		cout<<sum<<endl;
	}
}
