#include<stdio.h>
 void main()
{
    int num, tem, rem, rev = 0;
 
    printf("Enter an integer \n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Given number is = %d\n", tem);
    printf("Its reverse is  = %d\n", rev);
    }
