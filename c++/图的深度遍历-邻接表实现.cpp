#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct biao
{
	int m;
	struct biao *next;	
};
void ru(int b,biao *B)
{
	biao *p;
	p=new biao;
	p->m=b;
	p->next=B->next;
	B->next=p;
}
void chu(biao *B)
{
	biao *p;
	p=B->next;
	while(p!=NULL)
	{
		cout<<p->m<<' ';
		p=p->next;
	}
}
int dian,bian;
int visited[100]={0};
struct biao *B[100];
void DFS(int v,biao *m);	
int main()
{
	cin>>dian>>bian;
	for(int i=0;i<dian;i++)
	{
		B[i]=new biao;
		B[i]->next=NULL;
	}
	for(int i=0;i<bian;i++)
	{
		int a,b;
		cin>>a>>b;
		ru(b,B[a]);
		ru(a,B[b]);
	}
	int ding;
	cin>>ding;
	DFS(ding,B[ding]); 
}
void DFS(int v,biao *m)
{
	printf("%d ",v);
	visited[v]=1;
	biao *p;
	p=m->next;
	while(p!=NULL)
	{
		if(visited[p->m]!=1)
		{
			DFS(p->m,B[p->m]);
		}
		p=p->next;
	}
}
