#include<stdio.h>

auto int no = 10;

void gun()
{
    register float fValue = 20.3;
    printf("Value of f is:%f",fValue);
}
int main()
{
    printf("Inside main");
    gun();
    
    return 0;
}