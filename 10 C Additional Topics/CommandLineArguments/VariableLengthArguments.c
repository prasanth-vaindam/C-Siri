#include<stdarg.h>
#include<stdio.h>

void sum(int count, ...)
{
    va_list ap;
    int i, s = 0;
    va_start(ap, count);
    for(i = 0; i < count; i++)
        s += va_arg(ap, int);
    va_end(ap);
    printf("Sum = %d\n", s);
}
int main()
{
    sum(2,4,5,6);
    sum(4,5,6,7,8);
    sum(5,6,7,8,9,10);
    return 0;
}