#include<stdio.h>
void main()
{
int l,w,h,area,vol;
scanf("%d%d%d",&l,&w,&h);
vol=l*w*h;
area=(2*l*w)+(2*l*h)+(2*h*w);
printf("area= %d",area);
printf("\nvolume= %d",vol);
}
