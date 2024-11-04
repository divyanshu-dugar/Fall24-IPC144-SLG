// An Armstrong number (also known as a Narcissistic number) for a given number of digits is a number that is equal to 
// the sum of its digits each raised to the power of the number of digits.
// Eg: 153 = 1^3 + 5^3 + 3^3 = 153
#include <stdio.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to calculate the power of a digit manually
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int digits = countDigits(num);
    int sum = 0, temp = num;

    while (temp != 0) {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
