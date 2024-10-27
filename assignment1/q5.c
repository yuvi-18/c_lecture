// c program to count number of digits using while l

#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number; // converting negative numbers to positive;
    }

    do {
        count++;
        number /= 10; // for removing the last digit
    } while (number > 0);

    printf("The number of digits is: %d\n", count);

    return 0;
}
