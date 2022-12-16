//Sum and average of two numbers//
#include<stdio.h>
int main()
{
	int a,b,sum;
	float avg;
	printf("enter two numbers a and b:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	avg=sum/2;
	printf("Sum of two numbers=%d",sum);
	printf("Average of two numbers=%f",avg);
}
