#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};

void  initialize(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r ,int l)
{
    r->length=l;
}
int main() 
{
    int a,b,c;
    scanf("%d %d",&b,&c);
    struct Rectangle r;
    initialize(&r,b,c);
    a = area(r);
    printf("%d",a);
    changeLength(&r,20);
    return 0;
}
