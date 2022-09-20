/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int convert(long long oct);
int main()
{
    long long n;
    printf("enter octal number: ");
    scanf("%lld",&n);
    printf("%lld in octal = %d in decimal ", n,convert(n));
    return 0;
}
int convert(long long oct){
    int dec =0, i=0 , rem;
    while(oct >0){
        rem = oct % 10;
        oct = oct /10;
        dec = dec+ rem *pow(8,i);
        i++;
    }
    return dec;
}
    
