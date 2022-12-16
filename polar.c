//Rectangular to Polar//
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("enter rectangle co-ordinates:\n");
	scanf("%f %f",&x,&y);
	r= sqrt((x*x)+(y*y));
	theta= atan(y/x);
	theta= theta*(180.0/3.14);
	printf("polar co-ordinates=(r,theta)+(%f %f)\n",r,theta);
}

