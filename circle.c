#include <stdio.h>

int main()

{

    //variables to be used in our program

    float radius, area, circumference;

    float PI = 3.14159;

    //prompt the user to enter the radius

    printf("Enter the radius of the circle:\n");

    scanf("%f",&radius);

    //calculate area and circumference of circle

    area = PI * radius * radius;

    circumference = PI * radius * 2;

    //display area, circumference and radius

    printf("\nThe radius is:%f", radius);

    printf("\nThe area is: %.3f", area);

    printf("\nThe circumference is: %.3f",circumference);

    return 0;

}
