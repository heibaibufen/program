#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int m;
	while(scanf("%d",&m)!=EOF)
	{
		int n[1000];
		for(int i=0;i<m;i++)
		{
			cin>>n[i];
		}
		int time=0;
		for(int i=0;i<m;i++)
		{
			int j=0;
			int sum=100000;
			for(int i=0;i<m;i++)
			{
				if(sum>n[i]&&n[i]!=-1)
				{
					sum=n[i];
					j=i;	
				}
			}
			printf("%d\n",sum);
			n[j]=-1;
			time=(m-i)*sum+time;			
		}
		float a;
		a=(time*1.0)/m;
		printf("%.2f\n",a);
	}	
} 
