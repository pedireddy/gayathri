#include<stdio.h>
#include<string.h>
void main()
{
    char s[1000];
    int count = 0, i;
 
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("num of words: %d\n", count + 1);
}


