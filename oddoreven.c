#include <stdio.h>
int name(int num){
if(num%2==0)
printf("the num is even");
else
printf("the num is odd");
}
int main()
{
    int num;
    printf("enter the num");
    scanf("%d",&num);
    name(num);
   // printf("Hello World");
}
