# Fall24-IPC144-SLG

### Week-2 Coding Question:

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

### Week-3 Coding Question:

Write a C program that takes the total number of hours and minutes from the user, then calculates and displays the total number of seconds. The following functions are to be created to achieve the desired task:

- **Group 1**: `int getHours();`  
  This function will prompt the user to input the total number of hours and return the value.

- **Group 2**: `int getMinutes();`  
  This function will prompt the user to input the total number of minutes and return the value.

- **Group 3**: `int calculateSeconds(int hours, int minutes);`  
  This function will take the number of hours and minutes as input and return the total number of seconds.

- **Group 4**: `void showTotalSeconds(int totalSeconds);`  
  This function will display the total number of seconds.

- **Group 5**: `int main();`  
  This is the main function that will coordinate the execution of the program, calling the above functions as necessary.

  <hr>

### Week-3 Walkthrough:

![C](https://github.com/user-attachments/assets/1d810d5d-33d1-4b29-b983-1f075b3f0dbe)

  <hr>
  
### Week-3 Debugging:

Got it! Here’s a new debugging problem based on your example, formatted for a Markdown file:

```markdown
## Debugging Exercise

Debug the following program. This program is supposed to read in 4 numbers, then calculate the sum and average of the numbers, and print these out. However, it does not currently work. The program has various errors (bugs):

**Code:**

## Debugging Exercise

Debug the following program. This program is supposed to read in 4 numbers, then calculate the sum and average of the numbers, and print these out. However, it does not currently work. The program has various errors (bugs):

**Code:**

```c
1.  #include <stdlib.h>
2.  
3.  int main(void) {
4.      int num1, num2, num3, num4
5.      int total;
6.      float average;
7.  
8.      printf("Enter num1: ");
9.      scanf("%d", &num1);
10.     printf("Enter num2: ");
11.     scanf("%d", &num2);
12.     printf("Enter num3: ");
13.     scanf("%d", num3);
14.     printf("Enter num4: ");
15.     scanf("%d", &num4);
16.  
17.     total = num1 + num2 + num3 + num4;
18.     average = total / 4;
19.  
20.     printf("The total is: %d\n", total);
21.     printf("The average is: %.2f\n", average);
22.  
23.     return 0;
24. }


### a) List the syntax errors of the program. Write down the line number and what is wrong on that line.

Syntax errors are errors that prevent your compiler from creating an executable. For example, a missing semicolon is a syntax error.

### b) List the logical errors of the program. Write down the line number and what is wrong on that line.

Logical errors are errors that make your program behave differently than expected. They don't prevent you from getting an executable; the executable just doesn't do the job properly.
```

<hr>

### Week-2 Coding Question:

### Task Description:
1. Write a C program (WAP) to perform the following tasks:
    - Print the message on the screen:
      ```text
      Welcome to the 3rd week of the semester!
      ```

2. Declare and initialize variables with values of your choice, covering all the main data types in C (e.g., `int`, `float`, `double`, `char`).

3. Print the values of all the variables on the screen.

<hr>
