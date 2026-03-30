#include <stdio.h>

void input(char *name);
int calculate_name_length(char *name);
void compare_output(int len1, int len2);

int main() {

    char name1[100], name2[100];
    int len1, len2;

    printf("Enter first student name:\n");
    input(name1);

    printf("Enter second student name:\n");
    input(name2);

    len1 = calculate_name_length(name1);
    len2 = calculate_name_length(name2);

    compare_output(len1, len2);

    return 0;
}

void input(char *name) {
    printf("Enter name:\n");
    // Write code to read the student name
}

int calculate_name_length(char *name) {
    // Write code to calculate the length of the name using while/do while
}

void compare_output(int len1, int len2) {
    printf("Length of first name: %d\n", len1);
    printf("Length of second name: %d\n", len2);
    // Write code to compare lengths and display the appropriate message
}