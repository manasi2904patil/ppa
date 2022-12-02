#include<stdio.h>
#include<stdbool.h>

// % Mod
// == Equality

bool CheckEven(int iNo)
{
      if((iNo % 2) == 0) 
      {
            return true;
      }  
      else
      {
            return false;
      }

}
int main()
{
      int iValue = 0;
      bool bRet;

      printf("Enter One Number:\n");
      scanf("%d",&iValue);
      
      bRet = CheckEven(iValue);
      if(bRet == true)
      {
         printf("It is Even Number:\n");
      }
      else
      {
         printf("It is odd Number:\n");
      }
      CheckEven(iValue); 

      return 0;
}