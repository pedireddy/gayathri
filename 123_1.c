#include <stdio.h>

void main()
{
    int a;
    int i,n,k=1;
    scanf("%d %d",&a,&n);
    for(i=0;i<n;i++)
    {
        k=k*10;
    }
    printf("%d",a%k);
    
    
}
