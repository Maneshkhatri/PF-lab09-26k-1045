#include<stdio.h>
int Max(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a=15, b=25, c=35;
    int compare;
    compare = Max(a,b,c);
    printf("Greatest of all these is %d\n" , compare);
}