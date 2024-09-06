// Assignment 1
// Author: Adam Dashtaki
// Class: COP 3223, Professor Parra



#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv)
{
    
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}


double askForUserInput()
{
    double value;
    scanf("%lf", &value);
    return value;
}


double calculateDistance()
{
    double x1, y1, x2, y2;

    printf("Enter x1, y1, x2, y2 (separated by spaces): ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    x2 = askForUserInput();
    y2 = askForUserInput();

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %lf\n", distance);

    return distance;
}


double calculatePerimeter()
{
    double distance = calculateDistance();
    double perimeter = 2 * distance; 

    printf("The perimeter of the city is %lf\n", perimeter);
    return 4.0; 
}


double calculateArea()
{
    double distance = calculateDistance();
    double area = distance * distance; 

    printf("The area of the city is %lf\n", area);
    return 3.0; 
}


double calculateWidth()
{
    double x1, x2;

    printf("Enter x1, x2 (separated by space) for width calculation: ");
    x1 = askForUserInput();
    x2 = askForUserInput();

    printf("Point #1 entered: x1 = %lf\n", x1);
    printf("Point #2 entered: x2 = %lf\n", x2);

    double width = fabs(x2 - x1);
    printf("The width of the city is %lf\n", width);

    return 2.0; 
}


double calculateHeight()
{
    double y1, y2;

    printf("Enter y1, y2 (separated by space) for height calculation: ");
    y1 = askForUserInput();
    y2 = askForUserInput();

    printf("Point #1 entered: y1 = %lf\n", y1);
    printf("Point #2 entered: y2 = %lf\n", y2);

    double height = fabs(y2 - y1);
    printf("The height of the city is %lf\n", height);

    return 2.5; 
}
