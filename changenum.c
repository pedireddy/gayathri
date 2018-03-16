#include <stdio.h>
#include<math.h>
int main()
{
  int a[20],i=0,n,j,t,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
    for(j=i;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            c++;
            if(c==1)
        {
            printf("%d",j);
        }
        }
        
    }

}
    return 0;
}
