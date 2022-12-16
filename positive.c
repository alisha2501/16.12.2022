//to check if the no. is +ve or -ve//
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter a no.\n");
	scanf("%d",&a);
	if(a>0)
		printf("positive no.");
	else if(a<0)
		printf("negative no.");
	else
		printf("neither positive nor negative");
}

