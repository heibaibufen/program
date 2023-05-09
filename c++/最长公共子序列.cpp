#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int m[220][220];
	char a[220],b[220];
	while(scanf("%s",a)!=EOF)
	{
		scanf("%s",b);
		for(int i=0;i<=strlen(a);i++)
		{
			for(int j=0;j<=strlen(b);j++)
			{
				if(i==0||j==0)
				{
					m[i][j]=0;
				}
				else
				{
					if(a[i-1]==b[j-1])
					{
						m[i][j]=m[i-1][j-1]+1;
					}
					else
					{
						if(m[i-1][j]>m[i][j-1])
						{
							m[i][j]=m[i-1][j];
						}
						else
						{
							m[i][j]=m[i][j-1];
						}
					}
				}
			}	
		}	
		cout<<m[strlen(a)][strlen(b)]<<endl;
	}	
} 
