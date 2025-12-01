/* C program that demonstrates a function to square a number passed to it. */

#include <stdio.h> // Pre-processor directive/command
#include<math.h>

// Declare a function prototype/(function declaration) for the squarer function

void calc_compound_interest (float *ptrPrincipal, float rate, unsigned short years);

//main function begins program execution

int main()

{

    // Variable(s) to be used in the program
    float principal, rate, initialAmount;
    unsigned short duration;

    //prompt the user for the principal amount
    printf("\nPlease enter the principal/loan amount\n");
    scanf("%f",&principal);

    printf("\nPlease enter the rate:\n");
    scanf("%f",&rate);

    printf("\nPlease enter the number of years:\n");
    scanf("%uh",&duration);

    calc_compound_interest(&principal, rate, duration);

    printf("\nLoan/Debt details");
    printf("\n------------------------------");
    printf("\nInitial Amount:%7.2f\n",initialAmount);
    printf("Rate %2.2f\n",rate);
    printf("Duration %hu\n",duration);
    printf("Amount collected %7.2f\n",principal);
    printf("\n------------------------------");

    return 0;


}// End of function main
void calc_compound_interest (float *ptrPrincipal, float rate, unsigned short years)
{
    *ptrPrincipal=*ptrPrincipal*pow(1+(rate/100),years);
}

//Function definition of the squarer function

int squarer (int x)

{

   return x * x;

}// End of function squarer
