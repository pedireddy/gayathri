#include<stdio.h>
void main()
{
 char s1[20];
 char s2[20];
 int count1=0,count2=0,i;
 scanf("%s",&s1);
 scanf("%s",&s2);
 for(i=0;s1[i]!=0;i++)
 {
  count1++;
  }
  for(i=0;s2[i]!=0;i++)
  {
   count2++;
   }
   if(count1<=count2)
   {
    printf("%s",s2);
    }
    else
    {
     printf("%s",s1);
     }
     
}
