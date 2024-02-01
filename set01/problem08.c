#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main() {
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_n_array(n, a);
    output(n, a, sum);

    return 0;
}
int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    while (n <= 0) {
        printf("Please enter a valid array size (greater than 0): ");
        scanf("%d", &n);
    }

    return n;
}
void input_array(int n, int a[n]) {
    printf("Enter %d different numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
int sum_n_array(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    return sum;
}
void output(int n, int a[n], int sum) {
    printf("The sum of %d different numbers is: %d\n", n, sum);
    printf("Array elements: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}