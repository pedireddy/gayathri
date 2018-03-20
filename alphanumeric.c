#include<stdio.h>
int main()
{
char p[10];
int q[10],i;
scanf("%s",p);
for(i=0;p[i]!='\0';i++)
{
 if(p[i]>=0&&p[i]<=9)
 {
 printf("%d",p[i]); 
 }
}
return 0;
}
