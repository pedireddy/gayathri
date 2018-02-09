#include<stdio.h>
void main() 
{
		int n,t,r=0,i;
    printf("Enter the number");
    scanf("%d",&n);
		while(n!=0)
		{
			t=n%10;
			r=(r*10)+t;
			n=n/10;
		}
		while(r!=0)
		{
			i=r%10;
			r=r/10;
			printf("%d\t",i);
			}
     
}
