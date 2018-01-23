#include<stdio.h>
void main()
{
   int x, y, temp;
   printf("Enter the value of x and y: ");
   scanf("%d %d", &x, &y);
   temp = x;
   x = y;
   y = temp;
   printf("After swapping %d %d", x, y); 
   }
