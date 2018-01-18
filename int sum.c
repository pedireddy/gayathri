#include<stdio.h>
void main()
{
int a,b,i,sum=0;
int c[10];
scanf("%d",&a);
scanf("%d",&b);
printf("enter the array values");
for(i=0;i<a;i++);
{
scanf("%d",&c[i]);
}
printf("sum of5d values",b);
for(i=0;i<b;i++)
{
sum=sum+c[i];
}
printf("%d",sum);
}
