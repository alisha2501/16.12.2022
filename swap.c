//swapping//
#include<stdio.h>
int main()
{
	int a,b,s;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	printf("a and b before swapping=%d %d",a,b);
	s=b;
	b=a;
	a=s;
	printf("a and b after swapping=%d %d",a,b);		
}

