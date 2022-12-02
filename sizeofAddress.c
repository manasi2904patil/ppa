#include<stdio.h>

int main()
{

    char ch='A';
    int i = 11;
    float f = 3.14;
    double d = 9.567;

    printf("values from the variable are:\n");
    printf("%c\n",ch);                   // A
    printf("%d\n",i);                    // 11
    printf("%f\n",f);                    // 3.1400
    printf("%lf\n",d);                   // 9.5670

    printf("size of each variable:\n");
    printf("size of character:%d\n",sizeof(ch));     // 1
    printf("size of integer:%d\n",sizeof(i));        // 4
    printf("size of float:%d\n",sizeof(f));          // 4
    printf("size of double:%d\n",sizeof(d));         // 8

    printf("Address of each variable:\n");
    printf("Address of ch:%d\n",&ch);               //  2686783
    printf("Address of i:%d\n",&i);                 //  2686776
    printf("Address of f:%d\n",&f);                 //  2686772
    printf("Address of d:%d\n",&d);                 //  2686760

    return 0;
}