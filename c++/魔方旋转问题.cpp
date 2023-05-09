#include <iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct mo{
	int x;
	int y;
	int z;	
	int xcolor;
	int ycolor;
	int zcolor;
};
struct mofang{
	struct mo a1;
	struct mo a2;
	struct mo a3;
	struct mo a4;
	struct mo a5;
	struct mo a6;
	struct mo a7;
	struct mo a8;
};
void funx(mofang a)
{
	
}
int main()
{
	struct mofang a;
	a.a1.x=1;
	a.a1.y=1;
	a.a1.z=1;
	
	a.a2.x=1;
	a.a2.y=1;
	a.a2.z=-1;
	
	a.a3.x=1;
	a.a3.y=-1;
	a.a3.z=1;
	
	a.a4.x=1;
	a.a4.y=-1;
	a.a4.z=-1;	
	
	a.a5.x=-1;
	a.a5.y=1;
	a.a5.z=1;
	
	a.a6.x=-1;
	a.a6.y=1;
	a.a6.z=-1;
	
	a.a7.x=-1;
	a.a7.y=-1;
	a.a7.z=1;
	
	a.a8.x=-1;
	a.a8.y=-1;
	a.a8.z=-1;
	
	a.a1.xcolor=1;
	a.a2.xcolor=1;
	a.a3.xcolor=1;
	a.a4.xcolor=1;
	
	a.a1.ycolor=2;
	a.a2.ycolor=2;
	a.a5.ycolor=2;
	a.a6.ycolor=2;
	
	a.a7.ycolor=3;
	a.a8.ycolor=3;
	a.a3.ycolor=3;
	a.a4.ycolor=3;
	
	a.a5.xcolor=4;
	a.a6.xcolor=4;
	a.a7.xcolor=4;
	a.a8.xcolor=4;
	
	a.a1.zcolor=5;
	a.a5.zcolor=5;
	a.a3.zcolor=5;
	a.a7.zcolor=5;

	a.a6.zcolor=6;
	a.a2.zcolor=6;
	a.a8.zcolor=6;
	a.a4.zcolor=6;
	
					
} 
