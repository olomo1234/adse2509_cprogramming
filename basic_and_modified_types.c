/*C program to demonstratethe various C basic and modified types */
#include <stdio.h>

int main()
{
    //variables to be used in our program
    //basic data types
    char ch = 'A';
    int n = 8;
    float vatRate = .16;
    double pi = 3.141592;
    long double largePi = 3.141592635589793238L;

    //Display th ebasic datatypes
    printf("\n Demonstrating the Basic and Modified Data types in C.");
    printf("\n-------------------------------------------------------");
    printf("Bsic Data Typses");
    printf("\nchar:%c",ch);
    printf("\nint:%i",n);
    printf("\nfloat:%.2f",vatRate);
    printf("\ndouble:%.4lf",pi);
    printf("\nlong double:%.12lf",largePi);

    //Type-modified data types
    signed char sc = -100;
    unsigned char uc = 200;
    short int si = -32678;
    unsigned short int usi =65535;

    unsigned int ui = 4294967295U;
    long int li = 9223372036254775807l;
    unsigned long int uli = 18446744073709551615UL;

    //display the modified datatypes
    printf("\nType-Modified Data Types");
    printf("\n------------------------");
    printf("\nsigned char:%d",sc);
    printf("\nunsigned char:%u",uc);
    printf("\nshort int:%d",si);
    printf("\nunigned short int:%d",usi);
    printf("\nunsigned int:%u",ui);
    printf("\nlong int:%li",li);
    printf("\nunsigned long int:%uli",uli);

    // -----------------------------
    // Sizes of each data type
    // -----------------------------
    printf("\nSizes of Data Types (in bytes):\n");
    printf("-------------------------------\n");
    printf("char: %zu\n", sizeof(ch));
    printf("int: %zu\n", sizeof(n));
    printf("float: %zu\n", sizeof(vatRate));
    printf("double: %zu\n", sizeof(si));
    printf("long double: %zu\n", sizeof(li));
    printf("short int: %zu\n", sizeof(uli));
    printf("long int: %zu\n", sizeof(usi));
    return 0;
}
