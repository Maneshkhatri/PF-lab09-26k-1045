#include<stdio.h>
int sum(int a, int b);
int substract(int a, int b);
int main()
{
int a=5, b=10, add , sub;
add = sum(a,b);
printf("sum of %d and %d is %d\n",a,b,add);
sub = substract(a,b);
printf("substraction of %d and %d is %d\n",a,b,sub);
return 0;
}
int sum(int a, int b)
{
    return a+b;
}
int substract(int a, int b)
{
    return a-b;
}