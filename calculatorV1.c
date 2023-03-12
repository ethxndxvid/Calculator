#include <stdio.h>

int main(){

    char operator;
    double operand1, operand2;

    printf("Enter two operands: \n");
    scanf("%lf %lf", &operand1, &operand2);
    printf("Enter an operator(+, -, *, /): \n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("%lf + %lf = %lf", operand1, operand2, operand1 + operand2);
        break;
    
    case '-':
        printf("%lf - %lf = %lf", operand1, operand2, operand1 - operand2);
        break;
    
    case '*':
        printf("%lf * %lf = %lf", operand1, operand2, operand1 * operand2);
        break;

    case '/':
        printf("%lf / %lf = %lf", operand1, operand2, operand1 / operand2);
    default:
        printf("Error! Incorrect operator!");
        break;
    }
    return 0;
}