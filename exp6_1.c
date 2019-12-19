/*two numbers are input through the keyboard in two locations c and d.Write a program
to interchange the contents of c and d with the help of third variable */
#include<stdio.h>
#include<conio.h>
int main()
{
int c,d,temp;
printf("enter nos.c and d");
scanf("%d%d",&c,&d);
printf("\n before swap \n c=%d,d=%d",c,d);
temp=c;
c=d;
d=temp;
printf("\n after swap \n c=%d,d=%d",c,d);
return 0;
}
