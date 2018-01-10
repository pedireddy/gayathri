#include <stdio.h>
int main()
{
    int n,r, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(r=1;r<= n;r++)
    {
        sum = sum +r;
    }

    printf("Sum of first %d natural numbers is: %d",n, sum);

    return 0;
}
