#include<stdio.h>
main()
{
	float c,f;
	printf("Enter the value of temperature in celsius=");
	scanf("%f",& c);
	f=(1.8*c)+32;
	printf("The temperature in Fahrenheit:=%f",f);
}