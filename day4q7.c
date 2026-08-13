/*write a program to swap two numbers without using a third variable */
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: %d %d", a, b);

    return 0;
}
/*
PS C:\MinGW\bin> & C:\Users\shivo\OneDrive\Desktop\programing\day4q7.exe
Enter two numbers: 10 20
After swapping: 20 10
PS C:\MinGW\bin> & C:\Users\shivo\OneDrive\Desktop\programing\day4q7.exe
Enter two numbers: 7 14
After swapping: 14 7
PS C:\MinGW\bin> 
*/