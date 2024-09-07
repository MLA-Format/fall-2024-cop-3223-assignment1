// Imports.
#include <math.h>
#include <stdio.h>
#define PI 3.14159

double calculateDiameter(int x1, int y1, int x2, int y2) {
    return sqrt(((x2-x1)^2)+(y2-y1)^2);
}

double calculateDistance() {

    int x1 = 2;
    int y1 = 2;
    printf("Point #1 entered: x1 = %i; y1= %i\n", x1, y1);

    int x2 = 3;
    int y2 = 2;
    printf("Point #2 entered: x1 = %i; y1= %i\n", x2, y2);

    float diameter = sqrt(((x2-x1)^2)+(y2-y1)^2);

    printf("The distance between the two points is %f\n", diameter);

    return(diameter);

} 

double calculatePerimiter() {

    int x1 = 2;
    int y1 = 2;
    printf("Point #1 entered: x1 = %i; y1= %i\n", x1, y1);

    int x2 = 3;
    int y2 = 2;
    printf("Point #2 entered: x1 = %i; y1= %i\n", x2, y2);

    float perimeter = calculateDiameter(x1, y1, x2, y2) * PI;

    printf("The perimeter of the city encompassed by your request is %f", perimeter);

    return(1);

}

double calculateArea() {

    int x1 = 2;
    int y1 = 2;
    printf("Point #1 entered: x1 = %i; y1= %i\n", x1, y1);

    int x2 = 3;
    int y2 = 2;
    printf("Point #2 entered: x1 = %i; y1= %i\n", x2, y2);

    float area = pow(calculateDiameter(x1, y1, x2, y2)/2, 2) * PI;

    printf("The area of the city encompassed by your request is %f", area);

    return(1);
}

double calculateWidth() {
    int x1 = 2;
    int y1 = 2;
    printf("Point #1 entered: x1 = %i; y1= %i\n", x1, y1);

    int x2 = 3;
    int y2 = 2;
    printf("Point #2 entered: x1 = %i; y1= %i\n", x2, y2);

    double width = calculateDiameter(x1, y1, x2, y2);

    printf("The width of the city encompassed by your request is %d", width);

    return(1);
}

double calculateHeight() {
    int x1 = 2;
    int y1 = 2;
    printf("Point #1 entered: x1 = %i; y1= %i\n", x1, y1);

    int x2 = 3;
    int y2 = 2;
    printf("Point #2 entered: x1 = %i; y1= %i\n", x2, y2);

    double height = calculateDiameter(x1, y1, x2, y2);

    printf("The height of the city encompassed by your request is %d", height);

    return(1);
}

double askForUserInput() {
    double val = 0.00;
    scanf("%d", &val);

    return val;
}

int main(int argc, char **argvcc) {
    calculateArea();
} // End of main.