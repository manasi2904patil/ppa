#include<stdio.h>

// Structure Declartaion
// There is No Memory allocation at this point
struct Demo
{
    int i;
    float f;
    int j;
    double d;
};

int main()
{
      struct Demo obj1;
      struct Demo obj2;
      struct Demo obj3;

      obj1.d = 11.0;
      obj2.i = 21;
      obj3.j = 51;

      printf("Size of obj1 is : %d\n",sizeof(obj1));    //24
      printf("Size of obj2 is : %d\n",sizeof(obj2));    //24
      printf("i of obj2 is : %d\n",obj2.i);    //21

      return 0;
}