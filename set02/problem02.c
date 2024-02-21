#include <stdio.h>

// Function to take input for a side of the triangle
int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

// Function to check if the triangle is scalene
int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1; // Triangle is scalene
    } else {
        return 0; // Triangle is not scalene
    }
}

// Function to output the result
void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("Triangle with sides %d, %d, %d is scalene.\n", a, b, c);
    } else {
        printf("Triangle with sides %d, %d, %d is not scalene.\n", a, b, c);
    }
}

int main() {
    int side1, side2, side3;

    // Input for three sides of the triangle
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    // Check if the triangle is scalene
    int isscalene = check_scalene(side1, side2, side3);

    // Output the result
    output(side1, side2, side3, isscalene);

    return 0;
}