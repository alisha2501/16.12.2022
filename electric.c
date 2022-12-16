//electric bill//
#include<stdio.h>
int main()
{
	float x,y,p;
	printf("enter previous meter reading(x) and present reading(y)");
	scanf("%f %f",&x,&y);
	if(x>200)
		p=(100*1.4)+(100*2.5)+(x-200*3.2);
	else if(x>100)
		p=(100*1.4)+(x-100)*2.5;
	else
		p=x*1.4;
	printf("electric bill=%f",p);
}

