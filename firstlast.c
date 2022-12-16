//sum of first and last//
#include<stdio.h>
#include<math.h>
int main()
{
	int n,s=0,f,l;
	printf("enter a four didit number=");
	scanf("%d",&n);
	l=n%10;
	f=n/1000;
	s=f+l;
	printf("sum of first and last digit is %d",s);
}



