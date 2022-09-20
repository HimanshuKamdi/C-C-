/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
long long convert(int dec);
int main()
{
    int dec;
    long long bin;
    printf("Enter dec number: ");
    scanf("%d",&dec);
    bin=convert(dec);
    printf("Binary number=%lld\n", bin);
}
long long convert(int dec){
    long long bin=0, i=1, rem;
    while (dec>0){
        rem=dec%2;
        dec=dec/ 2;
        bin=bin+(i*rem);
        i=i*10;
    }
    return bin;
}

