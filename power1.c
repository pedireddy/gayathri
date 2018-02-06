#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=(n/2);i++)
    {
        if(pow(2,i)==n)
        {
            printf("yes");
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("no");
    }
   }
