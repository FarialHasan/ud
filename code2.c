#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    // Swapping process using a temporary variable
    temp = a;
    a = b;
    b = temp;
    
    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
