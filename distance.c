//find the distance//
#include<stdio.h>
int main()
{
	float u,t,a,s;
	printf("enter initial velocity,time,accerlation:");
	scanf("%f %f %f",&u,&t,&a);
	s=(u*t)-(1/2)*a*t*t;
	printf("distance=%f",s);
}
