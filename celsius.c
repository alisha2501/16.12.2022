//Fahrenheit to celsius//
#include<stdio.h>
int main()
{
	float f,temp;
	printf("enter temperature in fahrenheit:");
	scanf("%f",&f);
	temp=(f-32)*(5/9);
	printf("Temperature in celsius=%f",temp);
}
