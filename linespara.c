#include<stdio.h>
void main()
{
char b[100];
int count=0,i;
printf("Enter the paragraph\n");
scanf("%[^\n]s",b);
for(i=0;b[i]!='\0';i++)
{
if(b[i]=='.')
count++;
}
printf("Number of lines in paragraph are:%d\n",count);
}
