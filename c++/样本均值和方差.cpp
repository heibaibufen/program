#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	float a[10000]; 
	int j=0;
	while(scanf("%f",&a[j])!=EOF)
	{
		j++;
	}
	float junzhi,sum=0;
	for(int i=0;i<j;i++)
	{
		sum+=a[i];
	}
	junzhi=(sum*1.0)/j;
	printf("均值 ");
	cout<<junzhi<<endl;
	sum=0;
	for(int i=0;i<j;i++)
	{
		sum+=(a[i]-junzhi)*(a[i]-junzhi);
	}
	double fangcha=(sum*1.0)/(j-1);
	printf("样本方差 1/%d*%f=%f\n",j-1,sum,fangcha);
	printf("样本标准差 %f\n",sqrt(fangcha));
}
 //41250 41010 42650 38970 40200 42550 43500 40400 41870 39800
 //10510 10620 10670 10550 10780 10710 10670 10580 10560 10650
