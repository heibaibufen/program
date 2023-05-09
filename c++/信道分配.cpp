#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;	
int g[26][26]={0};
int used[26];	
int m;
int dfs(int id,int color)
{
	int j=0;
	for(int i=0;i<color;i++)
	{	
		j=0;
		for(int k=0;k<id;k++)
		{
			if(g[id][k]&&used[k]==i)
			{
				j=1;
				break;
			}
		}
		if(j==1)
		{
			continue;
		}
		else
		{
			used[id]=i;
		}
		if(j==0&&(id==m-1||dfs(id+1,color)))
		{
			return 1;
		}	
	}
	return 0;
}
int main()
{
	while(scanf("%d",&m)!=EOF)
	{
        if(m==0)
        {
            break;
        }
		getchar();
		for(int i=0;i<m;i++)
		{
			int j=0;
			while(1)
			{	
				int k;
				char n;
				scanf("%c",&n);
				if(n=='\n')
				{
					break;
				}
				if(j==0)
				{
					k=n-'A';
				}
				if(j>1)
				{
					g[k][n-'A']=1;
				}
				j++;
			}	
		}
		for(int i=1;i<=26;i++)
		{
            if(i==1)
            {
                if(dfs(0,i))
                {
                    printf("%d\n",i);
                    break;
                }
            }
			if(dfs(0,i))
			{
				printf("%d\n",i);
				break;		
			}		
		}		
	}
	
} 
