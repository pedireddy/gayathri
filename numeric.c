#include<stdio.h>
#include<string.h>
void main()
{
    char tmp[16];
scanf("%s", &tmp);

int d= 0;
int j=0;
while(j<strlen(tmp) && d == 0)
{
  if(tmp[j] < 57 && tmp[j] > 48)
   {
       d = 0;
    printf("numeric");
   }
  else
  {
    d= 1;
    printf("not numeric");
  }
  j++;
}
