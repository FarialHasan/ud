#include <stdio.h>
#include <math.h>

int main() {
    double num, square, squareRoot;
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    square = num * num;
    squareRoot = sqrt(num);
    
    printf("Square: %.2lf\n", square);
    printf("Square root: %.2lf\n", squareRoot);
    
    return 0;
}
