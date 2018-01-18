#include<stdio.h>
void main()
{
  int a, b, i, j, f;
  printf("Enter two numbers(intevals): ");
  scanf("%d %d", &a, &b);
  printf("Prime numbers between %d and %d are: ", a,b);
  for(i=a+1; i<b; ++i)
  {
      f=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          f=1;
          break;
        }
      }
      if(f==0)
        printf("%d ",i);
  }
}
