#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct ban{
	int left;
	int right;
	int high;
}bans[1001];
int cmp(const void * a,const void * b)
{
    return ((struct ban *)b)->high - ((struct ban *)a)->high;
}
int m,n,b,h;
int time(int k,int am)
{
	if(am==0)
	{
	int p=0;
	for(int i=k+1;i<b+1;i++)
	{
		if(bans[i].left<bans[k].left&&bans[k].left<bans[i].right)
		{
			p=1;
			if(bans[k].left-bans[i].left+time(i,0)<=bans[i].right-bans[k].left+time(i,1))
			{
				return bans[k].high-bans[i].high+bans[k].left-bans[i].left+time(i,0);
			}
			else
			{
				return bans[k].high-bans[i].high+bans[i].right-bans[k].left+time(i,1);
			}
		} 
	}

		if(bans[k].high>h)
		{
			return 20000;
		}
		else
		{
			return bans[k].high;
		}
		
	}
	if(am==1)
	{
		int p=0;
	for(int i=k+1;i<b+1;i++)
	{
		if(bans[i].left<bans[k].right&&bans[k].right<bans[i].right)
		{
			p=1;
			if(bans[k].right-bans[i].left+time(i,0)<=bans[i].right-bans[k].right+time(i,1))
			{
				return bans[k].high-bans[i].high+bans[k].right-bans[i].left+time(i,0);
			}
			else
			{
				return bans[k].high-bans[i].high+bans[i].right-bans[k].right+time(i,1);
			}
		} 
	}
	
		if(bans[k].high>h)
		{
			return 20000;
		}
		else
		{
			return bans[k].high;
		}
	
	}
	
}

int main()
{
	int a,c=0;
	cin>>a;
	while(a--)
	{
		
		cin>>b>>m>>n>>h;
		bans[0].left=m;
		bans[0].right=m;
		bans[0].high=n;
		for(int i=1;i<b+1;i++)
		{	
			cin>>bans[i].left;
			cin>>bans[i].right;
			cin>>bans[i].high;
		}
		qsort(bans,b+1,sizeof(ban),cmp);
        if(c!=0)
        {
            printf("\n");
        }
		cout<<time(0,0);
        c++;
	}
}


