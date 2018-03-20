#include<stdio.h>
#include<string.h>
char str[20],k;
int i,v1=0,v2=0,j;
void main()
{
scanf("%s",str);
for(i=0;str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/';i++)
{
	v1=v1*10+(str[i]-48);
}
k=str[i++];
for(j=i;str[j]!='\0';j++)
	v2=v2*10+(str[j]-48);
switch(k)
{case '+':
	printf("%d",v1+v2);
	break;
	case '-':
	printf("%d",v1-v2);
	break;
	case '*':
	printf("%d",v1*v2);
	break;
	case '/':
	printf("%d",v1/v2);
	break;
}
}
