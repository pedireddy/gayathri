#include<stdio.h>
void main()
{
int p,q,m;
scanf("%d%d",&p,&q);
m=(p<q)?p:q;
for(m=2; m <= p && m <= q; ++m)
{
if((p%m==0)&&(q%m==0))
{
printf("%d",m);
  break;
}
}
}
