/*write a program to convert temperature from Celsius to Fahrenheit*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("Temperature in Fahrenheit: %.2f", fahrenheit);

    return 0;
}
/*
PS C:\MinGW\bin> C:\Users\shivo\OneDrive\Desktop\programing\day3q5.exe
Enter temperature in Celsius: 0
Temperature in Fahrenheit: 32.00
PS C:\MinGW\bin> C:\Users\shivo\OneDrive\Desktop\programing\day3q5.exe
Enter temperature in Celsius: 100
Temperature in Fahrenheit: 212.00
PS C:\MinGW\bin> 
*/