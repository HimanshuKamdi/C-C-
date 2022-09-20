#include <stdio.h>

int main()
{
    char op;
    float num1;
    float num2 ;
    printf("Enter operation :+, - , *, / ");
    scanf("%c", &op);
    printf("Enter two operands");
    scanf("%f", &num1);
    scanf("%f", &num2);
    printf("Hii")
        if (op=='+')
            printf("Result :%f", num1+num2);
        else if (op=='-')
            printf("Result :%f", num1-num2);
        else if (op=='*')
            printf("Result :%f", num1*num2);
        else if (op=='/')
            printf("Result :%f", num1/num2);
            
    return 0;
            
}