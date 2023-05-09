#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char stack[100]={"\0"};
	int j=0;
	int top=0;
	char a[1000];
	char b[10]={'(','{','[','*'};
	char c[10]={')','}',']','*'};
	while(scanf("%c",&a[j])!=EOF)
	{
		j++;
	}
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='{'||a[i]=='['||a[i]=='('||(a[i]=='/'&&a[i+1]=='*'))
		{
            if(a[i]=='/'&&a[i+1]=='*')
            {
                i++;
                stack[top]=a[i];
			    top++;
		    	stack[top]='\0';
               continue;
            }
			stack[top]=a[i];
			top++;
			stack[top]='\0';
            continue;
		}
		if(a[i]=='}'||a[i]==']'||a[i]==')'||(a[i]=='*'&&a[i+1]=='/'))
		{
			if(top==0)
			{
				if(a[i]=='*')
				{
					printf("NO\n");
					printf("?-*/\n");
				}
				else
				{	printf("NO\n");
					printf("?-%c\n",a[i]);
				}
				return 0;
			}
			else
			{
				int p=-1;
				if(a[i]=='}')
				p=1;
				if(a[i]==']')
				p=2;
				if(a[i]=='*')
				p=3;
				if(a[i]==')')
				p=0;
				
				if(stack[top-1]==b[p])
				{
					top--;
					stack[top]='\0';
				}
				else
				{
					
					if(stack[top-1]=='*')
					{printf("NO\n");
						printf("/*-?\n");
					}
					else
					{printf("NO\n");
						printf("%c-?\n",stack[top-1]);
					}
					
					return 0;
				}
			}
            if(a[i]=='*'&&a[i+1]=='/')
            {
                i++;
            }
		}
	}
    if(top!=0)
    {
        if(stack[top-1]=='*')
		{   printf("NO\n");
	    	printf("/*-?\n");
		}
		else
		{   printf("NO\n");
		    printf("%c-?\n",stack[top-1]);
		}
    }
    else
    {
        printf("YES\n");
    }
	print(" ");
	return 0;
}
