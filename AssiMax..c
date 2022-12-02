#include<stdio.h>

int main()
{
     int m;
     int n;
     

     printf("Enter The  Two Numbers:\n");
     scanf("%d%d,&m,&n");

     if(m>n)
     {
        printf("Number is maximun",m);
     }
     if(n>m)
     {
        printf("Number is maximum",n);
     }

     if(m == n)
     {

        printf("Both are equal");
     }
    return 0;

}