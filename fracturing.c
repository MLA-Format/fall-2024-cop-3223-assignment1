//********************************************************
// fracturing.c
// Author: Mason
// Date: 9-8-2024
// Class: COP3223C-0V06, Professor Parra
// Purpose: This runs through a set of function that will calculate the diameter of a circle made
// using two points, calculate the perimeter of a circle, calculate the area of a circle, and then
// calculate the width and height of the circle.
// Input: The first and second coordinate.
// Output: To the command line, a summary of each point entered followed by the
// value computed using the two points.
//********************************************************


// Imports.
#include <math.h>
#include <stdio.h>
#define PI 3.14159


// askForUserInput gets the user input and returns the user input
// as a double.
double askForUserInput() {
    
    double userInput = 0;

    scanf("%lf", &userInput);

    return userInput;
} // End of askForUserInput.


// calculateDiameter calculates the diameter of a circle
// using two points.
double calculateDiameter(int x1, int y1, int x2, int y2) {

    return sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

} // End of calculateDiameter.


// calculateDistance calculates the distance from one point to another.
double calculateDistance() {

    double x1 = askForUserInput();
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %lf; y1= %lf\n", x1, y1);

    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x1 = %lf; y1= %lf\n", x2, y2);

    float diameter = calculateDiameter(x1, y1, x2, y2);

    printf("The distance between the two points is %lf\n", diameter);

    return(diameter);

} // End of calculateDistance.


// calculatePerimeter calculates the perimeter of a circle that
// has a diameter made of two points.
double calculatePerimiter() {

    double x1 = askForUserInput();
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %lf; y1= %lf\n", x1, y1);

    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x1 = %lf; y1= %lf\n", x2, y2);

    float perimeter = calculateDiameter(x1, y1, x2, y2) * PI;

    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return(1);

} // End of calculatePerimeter.


// calculateArea calculates the area of a circle
// that has a diameter made of two points.
double calculateArea() {

    double x1 = askForUserInput();
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %lf; y1= %lf\n", x1, y1);

    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x1 = %lf; y1= %lf\n", x2, y2);

    float area = pow(calculateDiameter(x1, y1, x2, y2)/2, 2) * PI;

    printf("The area of the city encompassed by your request is %f\n", area);

    return(1);
} // End of calculateArea.


// calculateWidth calculates the width of a circle with
// a diameter made of two points.
double calculateWidth() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %lf; y1= %lf\n", x1, y1);

    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x1 = %lf; y1= %lf\n", x2, y2);

    double width = calculateDiameter(x1, y1, x2, y2);

    printf("The width of the city encompassed by your request is %lf\n", width);

    return(1);
} // End of calculateWidth.


// calculateHeight calculates the height of a circle with
// a diameter made of two points.
double calculateHeight() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %lf; y1= %lf\n", x1, y1);

    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x1 = %lf; y1= %lf\n", x2, y2);

    double height = calculateDiameter(x1, y1, x2, y2);

    printf("The height of the city encompassed by your request is %lf\n", height);

    return(1);
} // End of calculateHeight.


// Main.
int main(int argc, char **argvcc) {
    calculateDistance();
    calculatePerimiter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
} // End of main.