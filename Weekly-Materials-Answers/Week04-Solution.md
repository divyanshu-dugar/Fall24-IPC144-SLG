# Week-4 Solutions

### 1. Programming Question Solution:

```c
#include <stdio.h>

// Group 1: Input Functions
int getFirstNumber() {
    int num;
    printf("Enter the first number: ");
    scanf("%d", &num);
    return num;
}

int getSecondNumber() {
    int num;
    printf("Enter the second number: ");
    scanf("%d", &num);
    return num;
}

// Group 2: Arithmetic Functions
int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

float divide(int num1, int num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return (float)num1 / num2;
}

// Group 3: Relational Functions
int isEqual(int num1, int num2) {
    return num1 == num2;
}

int isGreaterThan(int num1, int num2) {
    return num1 > num2;
}

int isLessThan(int num1, int num2) {
    return num1 < num2;
}

// Group 4: Logical Functions
int logicalAnd(int num1, int num2) {
    return num1 && num2;
}

int logicalOr(int num1, int num2) {
    return num1 || num2;
}

// Group 5: Output Function
void displayResults(int addRes, int subRes, int mulRes, float divRes, int eqRes, int gtRes, int ltRes, int andRes, int orRes) {
    printf("\n--- Results ---\n");
    printf("Addition: %d\n", addRes);
    printf("Subtraction: %d\n", subRes);
    printf("Multiplication: %d\n", mulRes);
    printf("Division: %.2f\n", divRes);
    printf("Equal: %s\n", eqRes ? "Yes" : "No");
    printf("Greater Than: %s\n", gtRes ? "Yes" : "No");
    printf("Less Than: %s\n", ltRes ? "Yes" : "No");
    printf("Logical AND: %s\n", andRes ? "True" : "False");
    printf("Logical OR: %s\n", orRes ? "True" : "False");
}

// Group 6: Main Function
int main() {
    // Input
    int num1 = getFirstNumber();
    int num2 = getSecondNumber();
    
    // Arithmetic Operations
    int addResult = add(num1, num2);
    int subResult = subtract(num1, num2);
    int mulResult = multiply(num1, num2);
    float divResult = divide(num1, num2);
    
    // Relational Operations
    int eqResult = isEqual(num1, num2);
    int gtResult = isGreaterThan(num1, num2);
    int ltResult = isLessThan(num1, num2);
    
    // Logical Operations
    int andResult = logicalAnd(num1, num2);
    int orResult = logicalOr(num1, num2);
    
    // Display Results
    displayResults(addResult, subResult, mulResult, divResult, eqResult, gtResult, ltResult, andResult, orResult);
    
    return 0;
}
```

---

### Explanation:

1. **Group 1: Input Functions**  
   The functions `getFirstNumber` and `getSecondNumber` prompt the user to input two integers.

2. **Group 2: Arithmetic Functions**  
   The functions `add`, `subtract`, `multiply`, and `divide` perform arithmetic operations on the two integers. Division handles the case where the second number is zero.

3. **Group 3: Relational Functions**  
   The functions `isEqual`, `isGreaterThan`, and `isLessThan` compare the two integers and return 1 or 0 based on the relational conditions.

4. **Group 4: Logical Functions**  
   The functions `logicalAnd` and `logicalOr` apply logical operators to check if both or either of the numbers are non-zero.

5. **Group 5: Output Function**  
   The `displayResults` function prints the results of all operations in a user-friendly format.

6. **Group 6: Main Function**  
   The `main` function coordinates the program, calling each function as needed, and displays the results.

<hr>

### 2. Walkthrough Question Solution:

