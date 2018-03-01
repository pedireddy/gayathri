#include<stdio.h>
int main()
{
  char s[50];
  int i,e,c=0;
  scanf("%s",s);
  for(i=0;s[i]!=0;i++)
  {
    c++;
  }
e=c/2;
   if(c%2!=0)
  {
    s[e]='*';
    for(i=0;s[i]!='\0';i++)
    {
    printf("%c",s[i]);
    }
    }
    else
    {
      s[e-1]='*';
      s[e]='*';
      for(i=0;s[i]!='\0';i++)
      {
        printf("%c",s[i]);
      }
    }
return 0;  
  }
