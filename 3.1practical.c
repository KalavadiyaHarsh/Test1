#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
void main()
{
int l;
float g,t;
printf("\n value of length=");
scanf("%d",& l);
printf("value of gravity=");
scanf("%f",& g);
t=2*pi*sqrt(l/g);
printf("%f",t);
getch();
}
