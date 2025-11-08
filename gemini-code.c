#include <stdio.h>
#include <string.h>

// --- Global Variables Section ---

/**
 * @brief Global integer used as a counter to track the number of calls
 * to the side-effect function.
 */
int global_op_counter = 0;

/**
 * @brief Global double variable, representing an important constant.
 */
const double global_const_value = 3.1415926535;

/**
 * @brief Global single-character key used for the XOR encryption/decryption.
 */
const char GLOBAL_XOR_KEY = 'K';

// --- Function Prototypes ---
int simple_addition(int a, int b);
int subtraction_with_side_effect(int a, int b);
double power(double base, int exp);
void xor_encrypt(const char* input, char* output, int len);


// --- Function Definitions ---

/**
 * @brief Performs a simple integer addition.
 * @param a The first operand.
 * @param b The second operand.
 * @return The sum of a and b.
 */
int simple_addition(int a, int b) {
    return a + b;
}

/**
 * @brief Performs subtraction (a - b) and increments the global operation counter.
 * This demonstrates a function with a side effect.
 * @param a The minuend.
 * @param b The subtrahend.
 * @return The result of the subtraction (a - b).
 */
int subtraction_with_side_effect(int a, int b) {
    // Side effect: modify the global variable
    global_op_counter++;
    printf("   [SIDE EFFECT] Global counter incremented to: %d\n", global_op_counter);
    return a - b;
}

/**
 * @brief Calculates the exponential power (base^exp).
 * @param base The base number (double).
 * @param exp The exponent (integer).
 * @return The result of base raised to the power of exp.
 */
double power(double base, int exp) {
    if (exp == 0) return 1.0;
    if (exp < 0) {
        base = 1.0 / base;
        exp = -exp;
    }
    double result = 1.0;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

/**
 * @brief Encrypts/decrypts a string using a simple character-wise XOR with a global key.
 * Since XOR is symmetric, this function performs both encryption and decryption.
 * @param input The null-terminated input string (plaintext or ciphertext).
 * @param output A pre-allocated buffer to store the result. Must be large enough.
 * @param len The length of the input string (excluding null terminator).
 */
void xor_encrypt(const char* input, char* output, int len) {
    for (int i = 0; i < len; i++) {
        // XOR operation for simple encryption
        output[i] = input[i] ^ GLOBAL_XOR_KEY;
    }
    output[len] = '\0'; // Null-terminate the output string
}


// --- Main Function ---

int main() {
    printf("--- C Function Demonstration ---\n");
    printf("Global Constant Value (PI Approximation): %.10f\n", global_const_value);
    printf("Initial Global Operation Counter: %d\n\n", global_op_counter);

    // 1. Addition Demonstration
    int num1 = 42;
    int num2 = 18;
    int sum = simple_addition(num1, num2);
    printf("1. Simple Addition: %d + %d = %d\n\n", num1, num2, sum);

    // 2. Subtraction with Side Effect Demonstration
    int diff1 = subtraction_with_side_effect(100, 25);
    int diff2 = subtraction_with_side_effect(50, 10); // Second call
    printf("2. Subtraction 1: 100 - 25 = %d\n", diff1);
    printf("2. Subtraction 2: 50 - 10 = %d\n", diff2);
    printf("   Final Global Operation Counter after two calls: %d\n\n", global_op_counter);

    // 3. Power (Exponential) Demonstration
    double base_val = 2.5;
    int exp_val = 4;
    double result_power = power(base_val, exp_val);
    printf("3. Power Function: %.2f ^ %d = %.4f\n\n", base_val, exp_val, result_power);

    // 4. XOR Encryption/Decryption Demonstration
    const char* original_msg = "Hello C World!";
    int msg_len = strlen(original_msg);
    char encrypted_msg[100]; // Buffer for ciphertext
    char decrypted_msg[100]; // Buffer for plaintext

    printf("4. XOR Encryption/Decryption (Key: '%c')\n", GLOBAL_XOR_KEY);
    printf("   Original Message: %s\n", original_msg);

    // Encrypt
    xor_encrypt(original_msg, encrypted_msg, msg_len);
    printf("   Encrypted Message (Ciphertext): %s\n", encrypted_msg);

    // Decrypt (XOR the ciphertext again with the same key)
    xor_encrypt(encrypted_msg, decrypted_msg, strlen(encrypted_msg));
    printf("   Decrypted Message (Plaintext): %s\n\n", decrypted_msg);

    // Final Check
    if (strcmp(original_msg, decrypted_msg) == 0) {
        printf("--- Demonstration Successful: Decryption matched original message. ---\n");
    } else {
        printf("--- Demonstration Failed. ---\n");
    }

    return 0;
}