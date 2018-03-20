#include <stdio.h>
#include<string.h>
int main()
{
   char s[20];
    int flag=0,i,j;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
         {
            if(s[i]==s[j])
            {
                flag++;
            }
         }
    }
    if(flag==0)
    {
        printf("\nyes");
    }
    else
    {
        printf("\nno");
    }
    return 0;
}

