#include<stdio.h>
void main ()
{
int d=0;                          
int e;                           
while ((e=getchar())!=EOF)  {   
if(e==' ') 
{ 
d++;
}
if(e=='\n')
printf("%d",d);

}
}
