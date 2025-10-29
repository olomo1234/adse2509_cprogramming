/*C program to demonstratethe various C arithmetic operations */
#include <stdio.h>

int main()
{
    //variables to be used in our program
    int num1, num2;
    printf("Please enter two integers");
    scanf("%d %d", &num1, &num2);

    //display the results of the various arithmetic operations
    printf("\nC Arithmetic Operations");
    printf("\n--------------------------------");
    printf("\nAddition ; %d + %d = %d",num1, num2, num1 + num2);
    printf("\nSubtraction ; %d - %d = %d",num1, num2, num1 - num2);
    printf("\nMultiplication ; %d * %d = %d",num1, num2, num1 * num2);
    printf("\nDivision ; %d / %d = %d",num1, num2, num1 / num2);
    printf("\nModulus ; %d %% %d = %d",num1, num2, num1 % num2);

    //increment and decrement operators
    printf("\n--------------------------------");
    printf("\nPre-increment (++num1) =%d",++num1);
    printf("\nPost-increment (num1++) =%d",num1++);

    printf("\nPre-deccrement (--num1) =%d",--num1);
    printf("\nPost-decrement (num1--) =%d",num1--);
    printf("Value of num1 & num2 after post increment and decrement respectively: %d and %d.", num1, num2);



    return 0;
}
