/*write a program to find and display the sum of the first n natural numbers*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers: %d", n, sum);

    return 0;
}
/*
PS C:\MinGW\bin> & C:\Users\shivo\OneDrive\Desktop\programing\dayq8.exe
Enter the value of n: 5
Sum of first 5 natural numbers: 15
PS C:\MinGW\bin> & C:\Users\shivo\OneDrive\Desktop\programing\dayq8.exe
Enter the value of n: 10
Sum of first 10 natural numbers: 55
PS C:\MinGW\bin> */