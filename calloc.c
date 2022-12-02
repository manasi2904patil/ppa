#include<stdio.h>

int main()
{
   int *p = NULL;
   int size = 0;

   printf("Enter The Size:\n");
   scanf("%d",&size);

   p = (int *)malloc(sizeof(int)*size);   // malloc(4*5) - malloc 20
   p = (int *)calloc(sizeof(int), size);  // calloc(4 , 5);

    return 0;
}