#include <stdio.h>

int main()
{
    char operator;
    int a, b;

    printf("Enter an operator(+,-,*,/):");//aksing the user for an operator
    scanf("%c", &operator);//reading the input
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d",&b);//asking for operands
    switch (operator)
    {
    case '+':
        printf("The sum of two number are %d\n", a + b);
        break;
    case '-':
        printf("The difference of the two numbers are %d", a - b);
        break;
    case '*':
    printf("The product of the two numbers are %d",a*b);
    break;
    case '/':
    printf("The quotient when we divide the two numbers are %d ",a/b);
    break;

        default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}