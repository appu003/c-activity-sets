#include <stdio.h>

// Function to take input for a number
int input_number() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    return number;
}

// Function to check if the number is a composite number
int is_composite(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not composite numbers
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return 1; // Number is composite
        }
    }

    return 0; // Number is not composite
}

// Function to output the result
void output(int n, int result) {
    if (result) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}

int main() {
    int number;

    // Input for the number
    number = input_number();

    // Check if the number is composite
    int result = is_composite(number);

    // Output the result
    output(number, result);

    return 0;
}