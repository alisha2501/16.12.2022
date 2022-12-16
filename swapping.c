//swapping without third variable//
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);
	printf("a and b before swapping=%d %d\n",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a and b after swapping=%d %d\n",&a,&b);
}

