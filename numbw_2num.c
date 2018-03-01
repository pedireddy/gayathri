#include<stdio.h>
void main()
{
int n,left,right;
scanf("%d",&n);
scanf("%d %d",&left,&right);
if((n>left)&&(n<right))
{
printf("yes");
}
else
{
printf("no");
}
}
