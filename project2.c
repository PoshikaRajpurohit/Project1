#include<stdio.h>
main()
{
	int s,hdrrate,tarate,darate;
	printf("Enter your salary=");
	scanf("%d",&s);
	printf("Enter your hdr rate=");
	scanf("%d",&hdrrate);
	printf("Enter your ta rate=");
	scanf("%d",&tarate);
	printf("Enter your da rate=");
	scanf("%d",&darate);
	
	int gs, hdr,ta,da;
	hdr=s*hdrrate/100;
	ta=s*tarate/100;
	da=s*darate/100;
	gs=s+hdr+ta+da;
	printf("gross salary=%d",gs);	
}