#include<stdio.h>
#include<conio.h>
int main()
{float da=0,hra=0,bs,tsal;
printf("enter basic salary=");
scanf("%f",&bs);
if(bs<1500)
{hra=bs*0.1;
da=bs*0.9;
}
else
{hra=500;
da=bs*0.98;
}
tsal=bs+da+hra;
printf("HRA=%f",hra);
printf("DA=%f",da);
printf("total salary=%f",tsal);
return 0;
}
