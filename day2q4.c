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
/*
PS C:\MinGW\bin> C:\Users\shivo\OneDrive\Desktop\programing\day2q4.exe
Enter the radius of the circle: 7
Area=153.94, Circumference=43.98
PS C:\MinGW\bin> C:\Users\shivo\OneDrive\Desktop\programing\day2q4.exe
Enter the radius of the circle: 3
Area=28.27, Circumference=18.85
PS C:\MinGW\bin> */