//Simple Interest//
#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf(" enter principle:\n time:\n rate:\n");
	scanf("%f %f %f",&p,&t,&r);
	si=(p*t*r)/100.0;
	printf("Simple Interest=%f",si);
}

