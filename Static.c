#include<stdio.h>

void Demo()
{
      auto int A=10;
      A++;  // Increment the value 1;
      printf("Value from Demo is:%d\n",A);

}

void Hello()
{
      static int B=10;
      B++;  // Increment the value 1;
      printf("Value from Hello is:%d\n",B);

}
int main()
{
     Demo();           //11
     Demo();           //11
     Demo();           //11
     
     Hello();           //11
     Hello();           //12
     Hello();           //13

     return 0;

}