//divisible by 11 and 13//
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%11==0 && n%13==0)
		printf("number divisible by 11 and 13");
	else
		printf("not divisible by 11 and 13");
}
