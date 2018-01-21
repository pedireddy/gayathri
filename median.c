#include<stdio.h>
int main()
{
int a[5],i;
for(i=0;i<5;i++)
scanf("%d",&a[i]);
int n=sizeof(a)/sizeof(int);
printf("the median is %d",a[n/2]);
return 0;
}
