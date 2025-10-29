//C program that acceepts radius fom user and calculate the area and circumference and display the radius, circumference and area
#include <stdio.h>
#include <math.h>
//#define PI 3.1c41592

int main()

{

    //variables to be used in our program

    float radius, area, circumference;

    //prompt the user to enter the radius

    printf("Enter the radius of the circle:\n");

    scanf("%f",&radius);

    //calculate area and circumference of circle

    //    area = PI * radius * radius;
    area = M_PI * pow(radius,2);

    //    circumference = PI * radius * 2;
    circumference = M_PI*(radius*2);

    //display area, circumference and radius

    printf("\nThe radius is:%f", radius);

    printf("\nThe area is: %.3f", area);

    printf("\nThe circumference is: %.3f",circumference);

    return 0;

}
