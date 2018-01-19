#include<stdio.h>
void main()

{

    int a[50], size, i, larg;

    printf("\n Enter the size of the array: ");

    scanf("%d", &size);

    printf("\n Enter %d elements of  the array: ", size);

    for (i = 0; i < size; i++)

        scanf("%d", &a[i]);

    larg = a[0];

    for (i = 1; i < size; i++)

    {

        if (larg<a[i])

            larg= a[i];

    }

    printf("\n largest element present in the given array is : %d", larg);

}
