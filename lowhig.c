
#include<stdio.h>
void main()
{
int n,a[20],i,low,great;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
low =a[0];
for(i=1;i<n;i++)
{
    if(a[i]<low)
    {
        low=a[i];
    }
}
printf("%d\t",low);
  great = a[0];
  
    for (i = 1; i < n; i++) 
    {
if(a[i] > great)
{
great= a[i];
}
    }
    printf("%d", great);
   
}
