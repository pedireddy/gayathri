#include <stdio.h>
#include<string.h>
int main()
{
  char str[30];
int c=0,i=0,v=0;
printf("enter the string");
scanf("%s",&str);
c=strlen(str);
for(i=0;i<c;i++)
{
if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
{
v++;
}
}
if(v==0)
{
printf("no");
}
else
{
printf("yes");
}
    return 0;
}




