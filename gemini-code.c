#include <stdio.h>
#include <math.h>

// Global variables for simple access and modification
int global_seed_value = 17;
int global_constant_factor = 3;

/**
 * @brief Simple addition function
 * @param a First integer
 * @param b Second integer
 * @return The sum of a and b
 */
int add_numbers(int a, int b) {
    return a + b;
}

/**
 * @brief Subtraction followed by multiplication by a global constant
 * @param a Starting integer
 * @param b Integer to subtract
 * @return (a - b) * global_constant_factor
 */
int subtract_and_multiply(int a, int b) {
    int difference = a - b;
    // This intermediate variable is useful for inspection
    int result = difference * global_constant_factor; 
    return result;
}

/**
 * @brief Computes base to the power of exponent
 * @param base The base number (integer)
 * @param exponent The exponent (integer)
 * @return The result of base^exponent (double)
 */
double compute_power(int base, int exponent) {
    // Uses the standard math library, often requiring an extra link flag (-lm)
    return pow((double)base, (double)exponent);
}

/**
 * @brief Main function that orchestrates the simple calculations
 */
int main() {
    // Local variables
    int input_a = 25;
    int input_b = 5;

    // 1. Call the simple addition function
    int sum_result = add_numbers(input_a, input_b);

    // 2. Call the subtraction and multiplication function
    int combined_result = subtract_and_multiply(input_a, input_b);

    // 3. Call the power function, using a global variable as the base
    double power_result = compute_power(global_seed_value, input_b);

    // 4. A simple check function for branching analysis
    if (sum_result > combined_result) {
        printf("Check Condition: Sum is greater than Combined Result.\n");
    } else {
        printf("Check Condition: Combined Result is greater than or equal to Sum.\n");
    }
    
    // Print the results for verification
    printf("--- Results ---\n");
    printf("Input A: %d, Input B: %d\n", input_a, input_b);
    printf("Global Seed Value: %d, Global Constant Factor: %d\n", global_seed_value, global_constant_factor);
    printf("Add Result (A + B): %d\n", sum_result);
    printf("Subtract & Multiply Result ((A-B)*Factor): %d\n", combined_result);
    printf("Power Result (Seed ^ B): %.2f\n", power_result);

    return 0;
}