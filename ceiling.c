//Floor and ceiling operation//
#include<stdio.h>
int main()
{
	float x;
	int ceil,floor;
	printf("enter a number=");
	scanf("%f",&x);
	if(x-(int)x>0)
	{
		ceil=(int)x+1;
	        floor=(int)x;
	}
	else
	{
		ceil=(int)x;
	        floor=(int)x;
	}
	printf("number=%d",ceil);
	printf("number=%d",floor);
}

