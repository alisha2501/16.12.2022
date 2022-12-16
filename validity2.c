//validity of a triangle and check//
#include<stdio.h>
int main()
{
        int a,b,c;
        printf("enter sides of a triangle");
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
	{
        printf("it is a valid triangle\n");
	if(a==b && b==c && a==c)
		printf("equilateral triangle");
	else if (a==b||b==c||c==a)
		printf("isoceles triangle");
	else 
		printf("scaler triangle");
	}

}

