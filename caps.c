#include <stdio.h>
#include<string.h>
void main()
{
    char c[30];
int n,i;
printf("enter the string ");
scanf("%[^\n]s",&c);
n=strlen(c);
c[0]=toupper(c[0]);
for(i=1;i<n;i++)
{
if(c[i]==32)
{
c[i+1]=toupper(c[i+1]);
}
}
printf("the string is = %s",c);

}
