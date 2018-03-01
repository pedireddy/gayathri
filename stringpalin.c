#include<stdio.h>
#include<string.h>
void main()
{
	char p[40],q[40];
	scanf("%s",p);
	strcpy(q,p);
	strrev(q);
	if(strcmp(p,q)==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
