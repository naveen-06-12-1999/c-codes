#include <stdio.h>
int fun(int *x,int *y)
{
    printf("\ncontent of x %p",x);
    printf("\n address of &x %u",&x);
    printf("\n value of *x %d",*x);
    printf("\ncontent of y %p",y);
    printf("\n  address of &y %u",&y);
    printf("\n value of *y %d",*y);
}
void main()
{
     int a=70,b=10;
     printf("\ncontent of a %d",a);
     printf("\n address of &a %u",&a);
     printf("\ncontent of b %d",b);
     printf("\n address of &b %u",&b);
     fun(&a,&b);
}
   

