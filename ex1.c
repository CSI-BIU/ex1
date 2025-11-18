/******************
Name:noam zaban
ID:212052674
Assignment:1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */
    
    char c;
    scanf("%c", &c);
    printf("%d\n", c);
    printf("%d\n", c & 1);
    
    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
    int n;
    scanf("%d", &n);
    printf("%u\n", (unsigned int)(~n));
    printf("%u\n", (unsigned int)n);

    // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
int value, r, l;
scanf("%d %d %d", &value, &r, &l);
int afterRight = value >> r;
int afterLeft  = value << l;
printf("%d\n", afterRight);
printf("%d\n", afterLeft);


    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
    printf("\nEven - Odd:\n");
int x, y, z;
scanf("%d %d %d", &x, &y, &z);
int a = x & 1;
int b = y & 1;
int c = z & 1;
int result = (a & b) | (a & c) | (b & c);
printf("%d\n", result);


    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */

int oct, hex;
scanf("%o %x", &oct, &hex);
printf("%d\n", oct & 1);
printf("%d\n", hex & 1);
printf("%d\n", (oct >> 31) & 1);
printf("%d\n", (hex >> 31) & 1);


    printf("Bye!\n");

    return 0;
}
