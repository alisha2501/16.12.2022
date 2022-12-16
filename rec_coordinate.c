//Polar to rectangle//
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("enter polar co-ordinates\n");
	scanf("%f %f",&r,&theta);
	theta= theta*(3.14/180.0);
	x= r*cos(theta);
	y= r*sin(theta);
	printf("rectangular co-ordinates(x,y)+(%f %f)\n",x,y);
}
