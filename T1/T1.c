#include <stdio.h>
int main() {
    double num1, num2, result;
    printf("Adds two numbers\n");  
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 + num2;
    printf("Result: %.2lf\n", result);
    return 0;
}
