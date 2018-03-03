#include<stdio.h>
void main()
{
int a[20],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
while(a[i]%2==0)
{
    a[i]=a[i]/2;
    
}
printf("%d\n",a[i]);
}
}
