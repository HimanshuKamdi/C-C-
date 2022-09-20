/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
#include <math.h> 
 
int convertDecimalToOctal(int decimalNumber); 
int main() 
{ 
    int decimalNumber; 
 
    printf("Enter a decimal number: "); 
    scanf("%d", &decimalNumber); 
 
    printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber)); 
 
    return 0; 
} 
 
int convertDecimalToOctal(int decimalNumber) 
{ 
    int octalNumber = 0, i = 1; 
 
    while (decimalNumber != 0) 
    { 
        octalNumber += (decimalNumber % 8) * i; 
        decimalNumber /= 8; 
        i *= 10; 
    } 
 
    return octalNumber; 
} 