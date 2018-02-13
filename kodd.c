#include<stdio.h>
void main()
{
int a[10],i,n,h,k;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]%2!=0)
    {
        h++;
    }
    if(h==k)
    {
        printf("%d",a[i]);
        break;
    }
}
}
