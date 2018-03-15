#include<stdio.h>
 void main()
{
    int num, temp, rem, rev = 0;
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("%d\n", rev);
}
