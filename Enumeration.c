#include<stdio.h>

enum days{Monday,Tuesday,Wednesday ,Thursday};

int main()
{
    enum days obj;

    int salary[]={200,450,250,700};

    printf("size of enum:%d\n",sizeof(obj));
    printf("Monday: %d\n",Monday);
     printf("Tuesday: %d\n",Tuesday);
      printf("Wednesday: %d\n",Wednesday);
       printf("Thursday: %d\n",Thursday);

       printf("My salary on Wednesday:%d\n",salary[2]);
       printf("My salary on Wednesday:%d\n",salary[Wednesday]);

    return 0;
}