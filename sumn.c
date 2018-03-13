#include <stdio.h>
#include<math.h>
void main()
{
    int a[30],n,i,s=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
s=s+a[i];
}
printf("%d",s);

}
