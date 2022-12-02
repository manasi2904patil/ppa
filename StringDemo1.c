#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[6] = "Hello";
    char  * ptr = Arr;
    int iCnt = 0;
       
     while(*ptr != '\0')
    {
        iCnt++;
        ptr++;
    }

    printf("Length is String is :%d\n",iCnt);   // 5

    return 0;
}