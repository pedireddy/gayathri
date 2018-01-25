#include<stdio.h>
void main()
{
char s[100];
int i=0,l=0,count;
printf("enter the sentence");
scanf("%[^\n]s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
count++;
}
l=l+1;
}
printf("the number of characters are %d",l-count);
}
