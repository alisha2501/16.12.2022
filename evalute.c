//evalute an equation//
#include<stdio.h>
int main()
{
	float a,b,c,d,x;
	printf("enter the values of a,b,c,d");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	if(c!=d)
	{
		x=(a-b)/(c-d);
		printf("x=%f",x);
	}
	else
		printf("its an error");
}
