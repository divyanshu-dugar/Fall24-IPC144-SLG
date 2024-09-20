# Fall24-IPC144-SLG

### Week-2 Coding Question:

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
