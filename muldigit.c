#include <stdio.h>
#include<math.h>
int main()
{
 int i,mul=1,n,a;  
scanf("%d",&n);
while(n>0)
{
  a=n%10;   
  n=n/10;
  mul=mul*a;
}
  printf("%d",mul);
    return 0;
}
