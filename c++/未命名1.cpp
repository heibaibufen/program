#include <iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
/*int main()
{
	int a,b[100][100],c[100][100];
	cin>>a;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=a-1;i>=0;i--)
	{
		for(int j=i;j>=0;j--)
		{
			if(i==a-1)
			{
				c[i][j]=b[i][j];
				continue;
			}
			if(c[i+1][j]>=c[i+1][j+1])
			{
				c[i][j]=c[i+1][j]+b[i][j];
			}
			else
			{
				c[i][j]=c[i+1][j+1]+b[i][j];
			}	
		}
	}
	cout<<c[0][0]<<endl;
}*/
/*int main()
{
	char m[200],n[200];
	int a[200][200];
	while(scanf("%s",m)!=EOF)
	{
		scanf("%s",n);
		for(int i=0;i<=strlen(m);i++)
		{
			for(int j=0;j<=strlen(n);j++)
			{
				if(i==0||j==0)
				{
					a[i][j]=0;
					continue;
				}
				if(m[i-1]==n[j-1])
				{
					a[i][j]=a[i-1][j-1]+1;
				}
				else
				{
					if(a[i-1][j]>=a[i][j-1])
					{
						a[i][j]=a[i-1][j];
					}else
					{
						a[i][j]=a[i][j-1];
					}
				}
				
			}
		}
		cout<<a[strlen(m)][strlen(n)]<<endl;
		
	}
}*/
int m[50000][50000];
int n[50000][50000];
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int b,c[10001];
		cin>>b;
		for(int i=0;i<b;i++)
		{
			cin>>c[i];
		}
		for(int i=0;i<b-1;i++)
		{
			for(int j=0,j<i;j++)
			{
				m[i][j]=m[i][j]+c[j];
			}
			
		}
	}
}
