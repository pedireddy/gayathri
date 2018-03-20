#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int count,i,j,t;
    scanf("%[^\n]s",str);
    count=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
    for(j=i+1;j<count;j++)
    {
        if(str[i]>str[j])
        {
            t=str[i];
            str[i]=str[j];
            str[j]=t;
        }
    }   
    }
printf("%s",str);
return 0;
}
