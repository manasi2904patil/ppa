#include<stdio.h>

int Multiplication(int No1, int No2)
{
    int Ans=0;
    Ans=No1*No2;
    return Ans;
}


int main()
{
    int A=10,B=11;
    auto int Ret=0;

    Ret=Multiplication(A,B);

    printf("Multiplication is:%d\n",Ret);

    

    return 0;    // Multiplication is:110
}