#include <stdio.h>

void replaceDigits(int number) {
    int result = 0;
    int position = 1;

    while (number > 0) {
        int digit = number % 10;
        if (digit == 0) {
            digit = 1;
        } else if (digit == 1) {
            digit = 0;
        
        result += digit * position;
        position *= 10;
        number /= 10;
    }

    printf("Modified number: %d\n", result);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    replaceDigits(number);
    return 0;
}
