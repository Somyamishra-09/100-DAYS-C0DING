/*write a program to swap two numbers using a third variable */
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: %d %d", a, b);

    return 0;
}
/*
PS C:\MinGW\bin> & C:\Users\shivo\OneDrive\Desktop\programing\day3q6.exe
Enter two numbers: 3 5
After swapping: 5 3
PS C:\MinGW\bin> & C:\Users\shivo\OneDrive\Desktop\programing\day3q6.exe
Enter two numbers: -1 1
After swapping: 1 -1
PS C:\MinGW\bin> */