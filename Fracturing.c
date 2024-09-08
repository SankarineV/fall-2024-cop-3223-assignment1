#include <stdio.h>
#include <math.h>

#define PI 3.14159


// Helper functions for  user input
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}

// Functions to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    // Output points
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    // Calculate and output distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Function to calculate the perimeter of a circle
double calculatePerimeter(double x1, double y1, double x2, double y2) {
    // Use calculateDistance to avoid repeating code
    double distance = calculateDistance(x1, y1, x2, y2);
    
    // Calculate and output the perimeter
    double perimeter = PI * distance;
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 1.0; 
    
    // Return difficulty level (scale 1-5)
}

// Function to calculate the area of a circle
double calculateArea(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2);
    
    // Calculate and output the area
    double radius = distance / 2;
    double area = PI * radius * radius;
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 1.0; 
    
    // Return difficulty level (scale 1-5)
}

// Function to calculate the width of the city
double calculateWidth(double x1, double x2) {
    // Output points
    printf("Point #1 entered: x1 = %.2f\n", x1);
    printf("Point #2 entered: x2 = %.2f\n", x2);

    // Calculate and output width
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 1.0; 
    
    // Return difficulty level (scale 1-5)
}

// Function to calculate the height of the city
double calculateHeight(double y1, double y2) {
    // Output points
    printf("Point #1 entered: y1 = %.2f\n", y1);
    printf("Point #2 entered: y2 = %.2f\n", y2);

    // Calculate and output height
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 1.0; 
    
    // Return difficulty level (scale 1-5)
}

// Main function
int main(int argc, char **argv) {
    double x1, y1, x2, y2;

    // Get user input for coordinates
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    // Call the required functions with the given inputs
    calculateDistance(x1, y1, x2, y2);
    calculatePerimeter(x1, y1, x2, y2);
    calculateArea(x1, y1, x2, y2);
    calculateWidth(x1, x2);
    calculateHeight(y1, y2);

    return 0;
}





















 
