#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int sum = 0;

    // Extract each digit and add to sum
    while (number > 0) {
        sum += number % 10; // Get the last digit
        number /= 10;       // Remove the last digit
    }

    printf("%d",sum);
    return 0;
}
