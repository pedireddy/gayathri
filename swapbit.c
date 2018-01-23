#include<stdio.h>
void main()
{
   int x, y;
   printf("Enter the value of x and y: ");
   scanf("%d %d", &x, &y);
    
   x=x^y;
   y=x^y;
   x=x^y;
   printf("After swapping %d %d", x, y); 
}

