#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct table
{
	int a[10]={1,4,5,6,9,10,12,19,24,64};
	int m;
};
int zheban(table s,int key)
{
	int low,high;
	low=0;
	high=s.m-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(s.a[mid]==key)
		{
			return mid;
		}
		else
		{
			if(key<s.a[mid])
			{
				high=mid-1;
			}
			if(key>s.a[mid])
			{
				low=mid+1;
			}
		}
	}
	return -1;
}
int main()
{
	struct table s;
	s.m=10;
	int k;
	k=0;
	printf("%d",zheban(s,k));
	
	
}
