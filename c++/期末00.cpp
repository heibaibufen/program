#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a;
        cin>>b;
        int r=1;
        while(1)
        {
            r=a%b;
            if(r==0)
            {
                printf("%d\n",b);
                break;
            }
            a=b;
            b=r;
        }
    }
}
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
