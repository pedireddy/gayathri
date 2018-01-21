#include<stdio.h>
int main()
{
int N,A,D,sum=0,i;
scanf("%d %d %d",&N,&A,&D);
for(i=N;i>1;i--)
{
sum=sum+(A+(N-1)*D);
}
printf("%d",sum);
return 0;
}
