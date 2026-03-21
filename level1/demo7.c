#include <stdio.h>
#include<string.h>

// Function Prototypes
void inputStrings(char str1[], char str2[]);
int compareStrings(char str1[], char str2[]);
void output(int result);

int main() {

    char str1[100], str2[100];
    int result;

   inputStrings(str1,str2);// Call the function to input the two strings
   result = compareStrings(str1,str2); // Call the function to compare the two strings and store the returned value
   output(result); // Call the function to display the result

    return 0;
}

void inputStrings(char str1[], char str2[]) {
    printf("Enter first string:\n");
    scanf("%s",str1);
    printf("Enter second string:\n");
    scanf("%s",str2);
}

int compareStrings(char str1[], char str2[]) {
    int res=strcmp(str1,str2);
    if(res==0)
    return 0;
    else if(res>0)
        return 1;
     else
     return -1;

    
    // Write code to compare two strings and return 0, 1, or -1
}

void output(int result) {
    printf("%d\n", result);
    // Write code to display the result
}