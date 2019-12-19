/*two numbers are input through the keyboard in two locations c and d.Write a program
to interchange the contents of c and d without third variable and use of arth. operator except +or- */
#include<stdio.h>
#include<conio.h>
int main()
{
    int c,d;
printf("enter nos.c and d");
scanf("%d%d",&c,&d);
printf("\n before swap \n c=%d,d=%d",c,d);
c=c*d;
d=c/d;
c=c/d;
printf("\n after swap \n c=%d,d=%d",c,d);
return 0;
}

