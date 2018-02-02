#include<stdio.h>
void main()
{
    int n,a[20],sum=0,b,i;
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       sum=sum+a[i];
       b=sum/n;
    }
    printf("%d",b);
}
