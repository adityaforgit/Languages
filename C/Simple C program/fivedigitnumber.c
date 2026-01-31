#include <stdio.h>

int main() {
    char number[6];  // 5 digits + 1 for null terminator
    printf("Enter a five-digit number: ");
    scanf("%5s", number);  // Read exactly 5 characters

    // Check validity
    int valid = 1;
    for (int i = 0; i < 5; i++) {
        if (number[i] < '0' || number[i] > '9') {
            valid = 0;
            break;
        }
    }

    if (valid) {
        printf("New number: ");
        for (int i = 0; i < 5; i++) {
            int digit = number[i] - '0';
            digit = (digit + 1) % 10;
            printf("%d", digit);
        }
        printf("\n");
    } else {
        printf("Invalid input. Please enter exactly a five-digit number.\n");
    }

    return 0;
}