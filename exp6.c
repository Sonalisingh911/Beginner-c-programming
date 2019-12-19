#include<stdio.h>
int main()
{int r,s,a;
printf("enter age of Ram,Shyam & Ajay");
scanf("%d%d%d",&r,&s,&a);
if(a<r && a<s)
printf("Ajay is Youngest,age=%d",a);
else if(r<s && r<a)
printf("Ram is Youngest,age=%d",r);
else
printf("shyam is youngest,age=%d",s);
return 0;
}
