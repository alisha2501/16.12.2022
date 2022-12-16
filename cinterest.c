//Compound Interest//
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,n,a;
	printf("enter principle,time,rate,n:");
	scanf("%f %f %f %f",&p,&t,&r,&n);
	a=p*(pow(1+(r/100*n),n*t));
	printf("coumpont interest amount=%f",a);
}
