#include<stdio.h>
void main()
{
int n,r,s;
scanf("%d",&n);
while(n!=0)
{
r=n%10;
n=n/10;
s=s+r;
}
printf("%d",s);
}
