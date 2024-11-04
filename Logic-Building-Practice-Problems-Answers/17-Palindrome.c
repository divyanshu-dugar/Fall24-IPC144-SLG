#include <stdio.h>

/*
 * A palindrome number is a number that remains the same 
 * when its digits are reversed. For example, 121 and 12321 
 * are palindrome numbers, but 123 is not.
 */

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
