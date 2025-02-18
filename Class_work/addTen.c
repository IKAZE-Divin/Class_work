#include <stdio.h>

int main() {
    int number;
    
    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Add 10 to the inputted number
    number += 10;
    
    // Display the result
    printf("Result: %d\n", number);
    
    return 0;
}
