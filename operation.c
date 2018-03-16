#include<stdio.h>
#include<math.h>
void main()
{
   int a,b,c,val;
   scanf("%d %d %d",&a,&b,&c);
   val=(a*b%c);
   printf("%d",val);
}
