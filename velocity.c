//final velocity//
#include<stdio.h>
#include<math.h>
int main()
{
	float u,a,s,v;
	printf("enter velocity,acc,distance,final velocity:");
	scanf("%f %f %f",&u,&a,&s);
	v=((u*u)-2*a*s);
	printf("velocity=%f",v);
}

