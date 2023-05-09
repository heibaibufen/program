#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int sum=0;
int fan(int a,int b)
{
    if(a==0||b==1)
    {
        return 1;
    }
    if(a<b)
    {
        return fan(a,a);
    }
    return fan(a,b-1)+fan(a-b,b);
    
}
int main()
{
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<fan(a,b)<<endl;
    }
}
