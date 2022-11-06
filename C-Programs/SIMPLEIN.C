#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,n,i;
printf("principal amount=");
scanf("%f",&p);
printf("rate of interest=");
scanf("%f",&r);
printf("number of years=");
scanf("%f",&n);
i=p*r*n/100;
printf("interest=%f",i);
getch();
}