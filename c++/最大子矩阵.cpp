#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int m[110][110],e[100][100][100][100]={0};
int num(int a,int b,int c,int d)
{
	

	if(a==b&&c==d)
	{
		return m[a][c];
		}	
		if(a==b)
		{
			if(e[a][b][c][d-1]==0)
			{
				e[a][b][c][d-1]=num(a,b,c,d-1);
			}
			return e[a][b][c][d-1]+m[b][d];
		}
		if(e[a][b-1][c][d]==0)
		{
			e[a][b-1][c][d]=num(a,b-1,c,d);
		}
		if(e[b][b][c][d]==0)
		{
			e[b][b][c][d]=num(b,b,c,d);
		}
		return e[a][b-1][c][d]+e[b][b][c][d];
	
}
int main()
{
	int aa;
	cin>>aa;
	for(int i=0;i<aa;i++)
	{
		for(int j=0;j<aa;j++)
		{
			cin>>m[i][j];
		}
	}
	int sum=-100000;
	for(int i=0;i<aa;i++)
	{
		for(int j=i;j<aa;j++)
		{
			for(int k=0;k<aa;k++)
			{
				for(int r=k;r<aa;r++)
				{
					if(sum<num(i,j,k,r))
					{
						sum=num(i,j,k,r);
					}
				}
			}
		}
	}
	cout<<sum<<endl;
		
} 
