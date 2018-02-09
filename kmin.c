#include<stdio.h>
void main()
{
int a[50], size, i,j,temp,k;
printf("\n Enter the size of the array: ");
scanf("%d", &size);
scanf("%d",&k);
printf("\n Enter %d elements of  the array: ", size);
 for (i = 0; i < size; i++)
scanf("%d", &a[i]);
 for (i=0;i<size;i++)
    for(j=0;j<size-1;j++)
    if(a[i]<a[j])
    {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
    for(i=0;i<size;i++)
    printf("%d",a[i]);
    printf("\n%d",a[k-1]);
}


