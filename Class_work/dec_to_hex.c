#include <stdio.h>

void decimalToHex(int decimal) {
    printf("Hexadecimal: %X\n", decimal);
}

int main() {
    int num;
    
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    decimalToHex(num);
    
    return 0;
}

