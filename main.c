#include <stdio.h>

int main(){
    int a = 5;
    int b = 2;
    float div = a/ b;
    printf("The division of %d and %d is %f", a, b, div);
    //value will be 2.00000 cause integers are being divided bṇy float which doesn't work properly in c lang.
    printf("+=: %d\n", a+= 5);
    printf("-=: %d\n", a-= 5);
    printf("*=: %d\n", a*= 5);
    printf("/=: %d\n", a/= 5);
    printf("\%=: %d\n", a%= 5);
    printf("&=: %d\n", a&= 5);
    printf("|=: %d\n", a|= 5);
    printf("^=: %d\n", a^= 5);
    printf(">>=: %d\n", a>>= 5);
    printf("<<=: %d\n", a<<= 5);

    int c = 30;

    // Logical AND (&&)
    int andResult = (a < b) && (b < c); // True (1) if both conditions are true
    printf("Result of (a < b) && (b < c): %d\n", andResult);

    // Logical OR (||)
    int orResult = (a > b) || (b < c); // True (1) if at least one condition is true
    printf("Result of (a > b) || (b < c): %d\n", orResult);

    // Logical NOT (!)
    int notResult = !(a == b); // True (1) if a is not equal to b
    printf("Result of !(a == b): %d\n", notResult);

    // Combining logical operators
    int combinedResult = (a < b) && !(b > c); // True (1) if a < b and b is not greater than c
    printf("Result of (a < b) && !(b > c): %d\n", combinedResult);

    // binary to hexa decinmal 

    int decimal;

    // Print the decimal number
    printf("Decimal: %d\n", decimal);

    // Convert to octal
    printf("Octal: %o\n", decimal);

    // Convert to hexadecimal
    printf("Hexadecimal: %X\n", decimal);

    // Convert to binary
    printf("Binary: ");
    for (int i = sizeof(decimal) * 8 - 1; i >= 0; i--) {
        // Print 1 or 0 for each bit
        printf("%d", (decimal >> i) & 1);
    }
    printf("\n");
    return 0;
}

// y4  >> =2 , y5 << = 1