#include<stdio.h> 
#define pi 3.14159
int main()
{
	float r,h,l,s1,s2,v1,v2;
	scanf("%f,%f",&r,&h);
	l=pi*r*2;
	s1=pi*r*r;
	s2=pi*r*r*4;
	v1=4*pi*r*r*r/3;
	v2=pi*r*r*h;
	printf("Բ�ܳ�Ϊ%.2f\n",1);
	printf("Բ���Ϊ%.2f\n",s1);
	printf("Բ������Ϊ%.2f\n",s2);
	printf("Բ�����Ϊ%.2f\n",v1);
	printf("Բ�����Ϊ%.2f\n",v2);
	return 0;
}
