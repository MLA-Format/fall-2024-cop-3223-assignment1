// Imports.
#include <math.h>
#include <stdio.h>

//int argc, char **argvcc
double calculateDistance() {

    int x1 = 2;
    int y1 = 2;
    printf("Point #1 entered: x1 = %i; y1= %i", x1, y1);

    int x2 = 3;
    int y2 = 2;
    printf("Point #2 entered: x1 = %i; y1= %i", x2, y2);

    float distance = sqrt(((x2-x1)^2)+(y2-y1)^2);

    printf("The perimeter of the city encompassed by your request is %f", distance);

} 

double calculatePerimiter() {

}

double calculateArea() {

}

double calculateWidth() {

}

double calculateHeight() {

}

double askForUserInput() {
    double val = 0.00;
    scanf("%d", &val);

    return val;
}

int main() {

} // End of main.