/*
     Steps  to Develop the Application
     Step 1 : Understand the Problem Statement
     Step 2 : Write The Algorithm
     Step 3 : Decide the programming language(C/C++/Java/___)
     Step 4 : Write the program
     Step 5 : Test the program
*/
// Accept N numbers from user and perforn the Addition

// Input
// Value of N = 5
// Values : 10 20 30 40 50

// Output
// Addition is : 150

// Algorithm
/*
    START
        Accept the number of elements from user
        Allocate the memory to store that numbers
        Accept the numbers from user
        Perform addition of all numbers
        Display the addition
    END
*/


#include<stdio.h>    // For printf and scanf
#include<stdlib.h>   // For malloc and free


///////////////////////////////////////////////
//
//   Application Name : Addition of N numbers
//   Input :     N numbers
//   Output :    Addition
//   Author :    Manasi Mohan Patil
//   Date :      18 September 2022
//
///////////////////////////////////////////////

int main()
{
     int *Arr = NULL;    // Pointer to hold the address of Array
     int iSize = 0;      // Variable to hold size of Array
     int i = 0;          // Loop counter
     int iSum = 0;       // To hold the Addition

     printf("Please Enter How Many Elements You Want?\n");
     scanf("%d",&iSize);

     //   Allocate the memory
     Arr = (int *)malloc(iSize * sizeof(int));
     printf("Memory Allocation is succesful:\n");

     printf("Please Enter the Elements:\n");

     for(i = 0; i < iSize; i++)
     {
        scanf("%d",&Arr[i]);
     }

     // perform Addition
     for(i = 0; i < iSize; i++)
     {
        iSum = iSum + Arr[i];
     }

     printf("Addition is : %d\n",iSum);

     free(Arr);

     printf("Memory Gets Deallocated.\n");

     return 0;
}
