#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void shan(int a[],int m,int n)
{
	for(int i=m;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}
int main()
{
	int m,n,r;
	cin>>m>>n>>r;
	int qiu[1100]={0};
	for(int i=0;i<n;i++)
	{
		cin>>qiu[i];
	}
	int road[1100];
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			road[i]=qiu[0]-0;
		}
		else
		{
			road[i]=qiu[i]-qiu[i-1];
		}
	}
	road[n]=m-qiu[n-1];
	int sum;
	for(int i=0;i<r;i++)
	{
		sum=10000;
		int k=0;
		for(int j=0;j<=n-i;j++)
		{
			if(sum>road[j])
			{
				sum=road[j];
				k=j;
			}
		}
		if(road[k+1]<road[k-1]&&k>0&&k<n)
		{
			shan(qiu,k+1,n-i);
		}
		else
		{
			shan(qiu,k-1,n-i);
		}
		if(k==0)
		{
			shan(qiu,k+1,n-i);
		}
		if(k==n)
		{
			shan(qiu,k-1,n-i);
		}
		for(int j=0;j<=n-i-1;j++)
		{
			cout<<road[j]<<endl;
		}
		for(int j=0;j<n-i-1;j++)
		{
			if(j==0)
			{
				road[j]=qiu[0]-0;
			}
			else
			{
				road[j]=qiu[j]-qiu[j-1];
			}
		}
		road[n-i-1]=m-qiu[n-i-2];
	}
		
	printf("%d\n",sum);
	
} 
