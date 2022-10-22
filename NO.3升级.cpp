#include<stdio.h>

int main()
{
	int a,b,c;
	printf("输入三个数："); 
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("最大值为：%d",a);
	else
	if(b>a&&b>c)
	printf("最大值为：%d",b);
	else
	printf("最大值为：%d",c); 
}
