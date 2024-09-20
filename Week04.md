# Week-4 

## Coding Question:

**Program Description:**  
Write a C program that performs arithmetic, logical, and relational expressions on two integers provided by the user. The program will break down into functions as per the following structure:

**Task:**  
The program will:
- Get two integers from the user.
- Perform arithmetic operations (addition, subtraction, multiplication, and division).
- Check relational conditions (greater than, less than, equal to).
- Apply logical operations (AND, OR).
- Display all results using separate functions for each task.

### Breakdown of Functions:

**Group 1: Input Functions**  
1. `int getFirstNumber();`  
   This function will prompt the user to input the first integer and return the value.

2. `int getSecondNumber();`  
   This function will prompt the user to input the second integer and return the value.

**Group 2: Arithmetic Functions**  
1. `int add(int num1, int num2);`  
   This function will take two integers and return their sum.

2. `int subtract(int num1, int num2);`  
   This function will take two integers and return their difference.

3. `int multiply(int num1, int num2);`  
   This function will take two integers and return their product.

4. `float divide(int num1, int num2);`  
   This function will take two integers and return the result of their division. It will check if the divisor is zero and handle that condition.

**Group 3: Relational Functions**  
1. `int isEqual(int num1, int num2);`  
   This function will return 1 if the two integers are equal, otherwise 0.

2. `int isGreaterThan(int num1, int num2);`  
   This function will return 1 if the first integer is greater than the second, otherwise 0.

3. `int isLessThan(int num1, int num2);`  
   This function will return 1 if the first integer is less than the second, otherwise 0.

**Group 4: Logical Functions**  
1. `int logicalAnd(int num1, int num2);`  
   This function will return 1 if both integers are non-zero (true), otherwise 0.

2. `int logicalOr(int num1, int num2);`  
   This function will return 1 if at least one of the integers is non-zero (true), otherwise 0.

**Group 5: Output Function**  
1. `void displayResults(int addRes, int subRes, int mulRes, float divRes, int eqRes, int gtRes, int ltRes, int andRes, int orRes);`  
   This function will take all results from the previous operations and display them.

**Group 6: Main Function**  
1. `int main();`  
   This function will coordinate the execution of the program, calling the above functions as necessary.

<hr>

