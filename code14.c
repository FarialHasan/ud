#include <stdio.h>

int main() {
    float cgpa;
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    
    if (cgpa >= 0.0 && cgpa <= 4.0)
        printf("Valid CGPA.\n");
    else
        printf("Invalid CGPA.\n");
    
    return 0;
}
