#include<stdio.h>

int X=10;           //GLOBAL Variable

void Demo()

{
	  int B=30;      //LOCAL Variable
	  
	  printf("Value of B from Demo:%d\n",B);
	  printf("Value of X from Demo:%d\n",X);
	  
	  //printf("%d,A");        //Not Allowed
}

int main()
{
	   int A=20;      //LOCAL Variable
	   
	   printf("Value of A from main:%d\n",A);
	   printf("Value of X from main:%d\n",X);
	   
	   //printf("%d,B");       // Not Allowed

      Demo();                //Function Call
      
      return 0;
}

