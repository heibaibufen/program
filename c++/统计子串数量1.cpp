#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void xiao(char a[])
{
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]<='Z'&&a[i]>='A')
		{
			a[i]='a'+a[i]-'A';
		}
	}
}
int main()
{
	char a[1001],b[1001];
	fgets(a,1000,stdin);
	fgets(b,1000,stdin);
	xiao(a);
	xiao(b);
	int c[1001];
	for(int i=0;i<strlen(b)-1;i++)
	{
		cin>>c[i];
	}
	int p=0,j=0;
	int d[1001]={0};
	int k=0;
	while(j<=strlen(a)-strlen(b)-1)
	{
		int win=0;
		while(p<=strlen(b)-2)
		{
			if(j>=strlen(a)-2)
			{
				win=1;
				break;
			}
			if(a[j]==b[p])
			{
				j++;
				p++;
			}
			else
			{
				if(p==0)
				{
					j++;
				}
				else
				{
					p=c[p];
				}
			}
		}
		if(win==0)
		{
			d[k]=j-strlen(b)+1;
			j=d[k]+1;
			p=0;
			k++;		
		}
				
	}
	cout<<k<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<d[i]+1<<endl;
	}
	
}
