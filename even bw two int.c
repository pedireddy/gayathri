#include<stdio.h>
int main()
{
int a,b,rem,i;
printf("give the first number\n");
scanf("%d",&a);
printf("give the second number\n");
scanf("%d",&b);
printf("\n the even number between %d and %d",a,b);
for(i=a;i<=b;++i)
rem=i%2;
if(rem==0)
{
printf("\n%d",i);
}
}
