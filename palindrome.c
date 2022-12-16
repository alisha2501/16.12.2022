//palindrome no//
#include<stdio.h>
int main()
{
	int n,sum=0,d,num;
	printf("enter a number");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		d=n%10;
		sum=sum*10+d;
		n=n/10;
	}
	if(num==sum)
		printf("palindrome number");
	else
		printf("not a palindrome number");
}

