/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{
    // Ascii
  // ASCII section: get a character from the user and print its numeric value and odd or even.
    printf("Ascii:\n");
    char userChar;                               
    const int lsb1=1;                            
    printf("Please enter a character\n");
    scanf(" %c",&userChar);
    printf("Its numerical value is %d\n",userChar);

       //checking if lsb is 1 (odd) or 0 (even)  
    int lsbCheck= userChar&lsb1;                    
    printf("0 for even, 1 for odd:%d\n",lsbCheck);
    

    // 2's complement and other representations

    // getting a negative number  (in 2nd comp) and printing it 1st comp value+ unsigned value
    printf("\n2's Complement to Other Representations:\n");
    int secondComp;
    printf("Please enter a negative integer\n");
    scanf("%d", &secondComp);

    // Convert 2's complement to 1's complement
    int firstComp= - (~secondComp);           
    printf("1's complement: %d\n", firstComp); 

    // Print as unsigned interpretation 
    printf("unsigned %u\n",firstComp);     



    // Shifting right and left
    printf("\nShifting Right and Left:\n");

    int mainNum, rightSteps, leftSteps;

    printf("Please enter 3 integers ");
    scanf("%d %d %d", &mainNum, &rightSteps, &leftSteps);

    mainNum = mainNum >> rightSteps;  
    mainNum = mainNum << leftSteps;

    printf("After shifting right and left:%d\n",mainNum);   

    // Even - Odd
    //Getting 3 numbers from the user. checking if most of them are even/odd
    printf("\nEven - Odd:\n");
    int num1,num2,num3;
    printf("please enter 3 integers ");
    scanf("%d %d %d",&num1,&num2,&num3);
    int lsbnum1 = num1 & 1;  
    int lsbnum2 = num2 & 1;  
    int lsbnum3 = num3 & 1;  
    //checking lsb's
    int count = lsbnum1 + lsbnum2 + lsbnum3;
    //"Deviding" by moving bits
    int oddOrEven=count >>1;
    printf("0 most of them are even, 1 - most of them are odd: %d\n",oddOrEven);
    
    // Different Bases
    printf("\nDifferent Bases:\n");
    int bitsToShift = 31;
    unsigned int octal,hexa;
    printf("Please enter two numbers in octal and hexadecimal bases ");
     scanf("%o %x",&octal,&hexa);
     //getting the lsb's 
    unsigned int lsbOct = octal &1;
    unsigned int lsbHexa = hexa &1;

    //getting the msb's by shifting
    unsigned int mask= 1u << bitsToShift;
    unsigned int msbOct = (octal & mask) >> bitsToShift;  
    unsigned int msbHexa = (hexa & mask) >> bitsToShift;
    printf("LSBs %u  %u\n",lsbOct,lsbHexa);
    printf("MSBs %u  %u\n",msbOct,msbHexa);

    printf("Bye!\n");

    return 0;
}
