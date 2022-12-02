#include<stdio.h>

// 11 Mulachi chappal
// 21 Mulichi chappal
// 51 Aai chi chappal
// 101 Wadlanchi chappal

int main()
{
     int iToken = 0;

     printf("Tumcha token Number Sanga:\n");
     scanf("%d",&iToken);

     switch(iToken)
     {
            case 11:
                 printf("Mulachi chappal milali:\n");
                 break;
            case 21:
                 printf("Mulichi chappal milali:\n");
                 break;
            case 51:
                 printf("Aai chi chappal milali:\n");
                 break;
            case 101:
                 printf("Wadlanchi chappal milali:\n");
                 break;
     
             default :
                 printf("Sorry asa Token Nahiye...\n");
                 break;
     }

     return 0;
}