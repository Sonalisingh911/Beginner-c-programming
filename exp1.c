
#include<stdio.h>
#include<conio.h>
int main()
{
int qty,dis=0;
float price,total;
printf("enter Qty. and price");
scanf("%d%f",&qty,&price);
if(qty>1000)
dis=10;
total=(qty*price)-(qty*price*(dis/100));
printf("total expences=%f",total);
return 0;
}
