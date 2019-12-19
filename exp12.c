/*IF total selling price of 15 item and profit is input through keyboard.Write a prgrm to find cp of 1 item */
#include<stdio.h>
#include<conio.h>
int main()
{int sp,pr,cp;
float cpof1;
printf("enter sellinp of 15items");
scanf("%d",&sp);
printf("enter profit of 15items");
scanf("%d",&pr);
cp=sp-pr;
cpof1=cp/15;
printf("cp of one item %d",cpof1);
return 0;
}
