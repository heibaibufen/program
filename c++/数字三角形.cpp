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
        int n[110][110];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cin>>n[i][j];
        }
    }
    int  num[110][110]={0};
    for(int i=m-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==m-1)
            {
                num[i][j]=n[i][j];
                continue;
            }
            if(num[i+1][j]>num[i+1][j+1])
            {
                num[i][j]=num[i+1][j]+n[i][j];
            }
            else{
                num[i][j]=num[i+1][j+1]+n[i][j];
            }
        }
    }
    cout<<num[0][0]<<endl;
    }
    
}
