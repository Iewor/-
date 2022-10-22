#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,n,t;
	r=0.07;
	n=10;
	t=pow(1+r,n);
	p=t-1;
	printf("p=%f\n",p);
	return 0;
}
