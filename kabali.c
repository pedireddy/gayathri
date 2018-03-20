#include <stdio.h>
void main()
{
  int p[10],q[10],n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&p[i]);
  }
  for(i=0;i<n;i++)
  {
    scanf("%d",&q[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("\n%d",q[i]-p[i]);
  }
}
