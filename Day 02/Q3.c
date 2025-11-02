//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;

    // Input length and breadth
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area = %.2f, Perimeter = %.2f\n", area, perimeter);

    return 0;
}