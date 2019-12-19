#include<stdio.h>
#include<math.h>
int main()
{ float ci,p,r,t;
printf("enter principal,rate and time");
scanf("%f%f%f",&p,&r,&t);
ci=p*pow((1+r*0.01),t);
printf("enter ci=%f",ci);
return 0;
}
