#include<stdio.h>
int main()
{
  int num,i,rev=0,s,a;
  scanf("%d",&num);
  while(num!=0)
  {
    s=num%10;
    rev=rev*10+s;
    num/=10;
  }
  while(rev!=0)
  {
    a=rev%10;
  if(a%2!=0)
    {
      printf("%d ",a);
    }
    rev/=10;
  }
  return 0;
}
