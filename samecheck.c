
#include<stdio.h>
void main()
{
int n,a[20],k,i,count;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
count++;
}
}
printf("%d",count);
}
