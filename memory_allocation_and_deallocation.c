//C program to demonstrate memory allocation usinng malloc() and calloc() and tthe free() functions

#include <stdio.h>
#include<stdlib.h>

int main(){
    int *arr1, *arr2,*arr3: //declare integer array pointers
    int n; //looping variable

    printf("=== Demonstation of malloc(), Calloc() and free() functions.");

    //1. malloc() allocates memory bbut doesn't initialise it

    printf("1.Using malloc() to allocate 5 integers\n");
    arr1 = (int*)malloc(5*sizeof(int));
    if(arr1 == NULL)
    {
        printf("memory allocation failed.\nPlease close some programs and try again!\n");
        return 1;--
    }
    //|Dispay the uninitialised values
    for(n = 0; n<5; n++)
    {
        printf("arr1[%d]=%d\n",n,arr1[n]);

    }
    for(n = 0; n<5; n++
    {
        printf("Please enter the value/number to be stored in position %d:\n",n+1);
        scanf("%d"&arr1[n]);
    }


     //2. calloc() allocates memory and nitialise to zero

    printf("2.Using calloc() to allocate 7 integers\n");
    arr2 = (int*)calloc(7,*sizeof(int));
    if(arr2 == NULL)
    {
        printf("memory allocation failed.\nPlease close some programs and try again!\n");
        free(arr1);
        return 1;
    }
    //Dispay the uninitialised values
    for(n = 0; n<7; n++)
    {
        printf("arr2[%d]=%d\n",n,arr2[n]);

    }
    for(n = 0; n<7; n++)



     //3. realloc() allocates memory and nitialise to zero

    printf("3.Using realloc() to resizee arr2 from 7 integers to 10 integers\n");
    arr3 = (int*)realloc(arr,10*sizeof(int));
    if(arr3 == NULL)
    {
        printf("memory reallocation failed.\nPlease close some programs and try again!\n");
        free(arr2);
        free(arr1);
        return 1;
    }
    //Always asign back to original pointer
    arr2 =arr3

    //Display the new memory indexes(7, 8, and 9) contain garbage value
    printf("The values at index 7, 8, and 9 in *arr2 array are:\n")
    for(n = 0; n<7; n++)
    {
        printf("arr2[%d]=%d\n",n,arr2[n]);

    }
    arr2[7]=8;
    arr2[8]=6;
    arr2[9]=5;

    printf("The values in *arr2 array after reallocation are are:\n")
    for(n = 0; n<7; n++)
    {
         printf("arr2[%d]=%d\n",n,arr2[n]);
    }


    return 0;

}
