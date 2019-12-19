#include<stdio.h>
#include<conio.h>
int main()
{int amt,noh,nof,not;
printf("enter amount=");
scanf("%d",&amt);
noh=amt/100;
amt=amt%100;
nof=amt/50;
amt=amt%50;
not=amt/10;
amt=amt%10;
printf("no.of hundreds=%d\n",noh);
printf("no.of fifty=%d\n",nof);
printf("no. of tens=%d\n",not);
return 0;
}
