#include<stdio.h>
void main()
{
int a[50], size=10, i, larg;

    printf("\n Enter %d elements ", size);

    for (i = 0; i < size; i++)

        scanf("%d", &a[i]);

    larg = a[0];

    for (i = 1; i < size; i++)

    {

        if (larg<a[i])

            larg= a[i];

    }

    printf("\n largest element : %d", larg);

}
