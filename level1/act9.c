#include <stdio.h>
#include <ctype.h>

void input(char *str);
void count(char *str, int *vowels, int *consonants);
void display(char *str, int vowels, int consonants);

int main() {
    char str[200];
    int vowels = 0, consonants = 0;

    input(str);
    count(str, &vowels, &consonants);
    display(str, vowels, consonants);

    return 0;
}

void input(char *str) {
    printf("Enter string:\n");

    // TODO: Read the full string including spaces
    // Hint: use scanf or fgets
}

void count(char *str, int *vowels, int *consonants) {

    int i = 0;

    // TODO: Use while loop to traverse the string
    while(/* condition */) {

        // TODO: Check if character is alphabet

        // TODO: Convert character to lowercase if needed

        // TODO: Check if it is vowel (a,e,i,o,u)
        // Increment vowels

        // TODO: Otherwise increment consonants

        i++;
    }
}

void display(char *str, int vowels, int consonants) {

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

}