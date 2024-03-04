#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main() {
    char mainString[100], subString[100];
    int index;
    input_string(mainString, subString);
    index = sub_str_index(mainString, subString);
    output(mainString, subString, index);

    return 0;
}
void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);

    printf("Enter the substring: ");
    scanf("%s", b);
}
int sub_str_index(char* string, char* substring) {
    int i, j;
    int stringLen = strlen(string);
    int subLen = strlen(substring);

    for (i = 0; i <= stringLen - subLen; i++) {
        for (j = 0; j < subLen; j++) {
            if (string[i + j] != substring[j]) {
                break;
            }
        }
        if (j == subLen) {
            return i; 
        }
    }

    return -1;
}
void output(char *string, char *substring, int index) {
    if (index != -1) {
        printf("The substring '%s' is found in the main string '%s' at index %d.\n", substring, string, index);
    } else {
        printf("The substring '%s' is not found in the main string '%s'.\n", substring, string);
    }
}