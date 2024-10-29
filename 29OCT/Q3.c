#include <stdio.h>

int main() {
    int x;
    int zero_count = 0;
    int minus_sum = 0;
    int plus_sum = 0;

    printf("Enter integers (type -1 to stop):\n");

    while (1) {
        scanf("%d", &x);
        
        // Exit condition
        if (x == -1) {
            break;
        }

        if (x == 0) {
            zero_count++;
        } else if (x < 0) {
            minus_sum += x;
        } else { // x > 0
            plus_sum += x;
        }
    }


    printf("Zero count: %d\n", zero_count);
    printf("Sum of negative numbers: %d\n", minus_sum);
    printf("Sum of positive numbers: %d\n", plus_sum);

    return 0;
}
