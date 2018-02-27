#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
if((n%10)==0)
{
printf("%d",n);
}
else
{
do
{
n++;
}
while((n%10)!=0);
printf("%d",n);
}
}
