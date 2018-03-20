#include<stdio.h>
#include<string.h>
void main()
{
  char c[50],a[20];
  int l,i,A;
  scanf("%s",c);
  l=strlen(c);
  for(i=0;i<=l;i++)
  {
    if(i%2==0)
    {
      printf("%c",c[i]);
    }
  }
  printf("\t");
  for(i=0;i<=l;i++)
  {
    if(i%2!=0)
    {
      printf("%c",c[i]);
    }
  }
}
