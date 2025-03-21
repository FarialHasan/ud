#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product, remainder;
    float quotient;
    
    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Perform operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;
    remainder = num1 % num2;
    
    // Display results
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);
    printf("Division: %d / %d = %.2f\n", num1, num2, quotient);
    printf("Remainder: %d %% %d = %d\n", num1, num2, remainder);
    
    return 0;
}
