//linear equation//
#include<stdio.h>
int main()
{
	float x1,x2;
	int a,b,c,d,m,n;
	printf("enter a,b,c,d,m,n:");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&m,&n);
	if((a*d)-(c*b)!=0)
	{
		x1= (m*d-b*n)/(a*d-c*b);
		x2= (n*a-m*c)/(a*d-c*b);
		printf("x1 and x2:%f %f",&x1,&x2);
	}
	else 
		printf("error");
}


