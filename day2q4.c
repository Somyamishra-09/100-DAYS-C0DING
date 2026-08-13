/*write a program to calculate the area and circumference of a circle given its radius*/
#include <stdio.h>

int main() {
    float radius;
    float area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}