#include <stdio.h>
#include <stdlib.h>

// Global variables with different types
int g_counter = 0;
float g_result = 0.0f;
char g_flag = 'A';
unsigned int g_secret = 0xDEADBEEF;

// Function 1: Simple addition
int add_numbers(int a, int b) {
    g_counter++;
    return a + b;
}

// Function 2: Subtraction with side effect
int subtract_numbers(int a, int b) {
    int diff = a - b;
    if (diff < 0) {
        g_flag = 'N';  // Negative
    } else {
        g_flag = 'P';  // Positive
    }
    return diff;
}

// Function 3: Power function (exponential)
float power(float base, int exp) {
    float result = 1.0f;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    g_result = result;
    return result;
}

// Function 4: XOR encryption/obfuscation
unsigned int xor_transform(unsigned int value, unsigned int key) {
    unsigned int transformed = value ^ key;
    g_secret ^= transformed;
    return transformed;
}

// Main function demonstrating usage
int main(int argc, char *argv[]) {
    int x = 10;
    int y = 5;
    
    printf("=== Reverse Engineering Demo ===\n");
    
    // Test addition
    int sum = add_numbers(x, y);
    printf("Add: %d + %d = %d\n", x, y, sum);
    printf("Counter: %d\n", g_counter);
    
    // Test subtraction
    int diff = subtract_numbers(x, y);
    printf("Subtract: %d - %d = %d\n", x, y, diff);
    printf("Flag: %c\n", g_flag);
    
    // Test power
    float pow_result = power(2.0f, 5);
    printf("Power: 2^5 = %.2f\n", pow_result);
    printf("Global result: %.2f\n", g_result);
    
    // Test XOR
    unsigned int encrypted = xor_transform(0x12345678, 0xABCDEF00);
    printf("XOR: 0x%X\n", encrypted);
    printf("Secret: 0x%X\n", g_secret);
    
    return 0;
}