#include <stdio.h>
void fun1(int n)
{
    if(n>0)
    {
        printf("%d",n);
        return fun1(n-1);
    }
}
void fun2(int m)
{
    if(m>0)
    {
        printf("%d",m);
        return fun2(m-1);
        printf("%d",m);
    }
}
int main()
{
    int a = 3;
    fun1(a);
    fun2(a);

    return 0;
}
