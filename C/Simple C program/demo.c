#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

int main() {
    char input[1000];
    int frequency[MAX_CHAR] = {0};

    // Get user input
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character from the input
    input[strcspn(input, "\n")] = '\0';

    // Count the frequency of each character
    for (int i = 0; input[i] != '\0'; i++) {
        frequency[(unsigned char)input[i]]++;
    }

    // Print the frequency of each character
    for (int i = 0; i < MAX_CHAR; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d\n", i, frequency[i]);
        }
    }

    return 0;
}