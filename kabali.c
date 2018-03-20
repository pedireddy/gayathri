#include <stdio.h>
int main()
{
  int a[10],b[10],n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("\n%d",b[i]-a[i]);
  }
  return 0;
}
