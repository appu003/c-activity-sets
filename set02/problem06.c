#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main() {
    char original_string[100], reversed_string[100];

    input_string(original_string);
    str_reverse(original_string, reversed_string);
    output(original_string, reversed_string);

    return 0;
}

void input_string(char *a) {
    printf("Enter a string: ");
    gets(a);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        rev_str[i] = str[length - 1 - i];
    }

    rev_str[length] = '\0';  
}

void output(char *a, char *reverse_a) {
    printf("Original String: %s\n", a);
    printf("Reversed String: %s\n", reverse_a);
}