#include<stdio.h>
void main()
{
    int i, n, a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", a);
        nextTerm = a + b;
        a = b;
        b= next;
    }
}
