#include <stdio.h>
#include<math.h>
void main()
{
 int n,k,i,a[100];
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
 if(k==i+1)
 {
     printf("%d",a[i]);
 }
 }
}
