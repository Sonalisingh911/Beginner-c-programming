#include<stdio.h>
void swap(int*,int*);
int main()
{int a,b;
printf("enter a and b");
scanf("%d%d",&a,&b);
printf("before swaping a=%d b=%d",a,b);
swap(&a,&b);
printf("after swap a=%d b=%d",a,b);
return 0;
}
void swap(int *a,int *b)
{int t;
t=*a;
*a=*b;
*b=t;
}
