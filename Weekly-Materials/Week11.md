# IPC SLG Session Activities

Welcome to the IPC SLG session! These activities are designed to enhance your understanding of **structures**, **pointers**, **arrays of structures**, and **functions**. These exercises focus on practical coding skills and problem-solving.

## Session Overview

- **Topic:** Structures, Pointers, Array of Structures, and Functions
- **Duration:** 1 hour 30 minutes
- **Activities:** 
  - Activity 1: Basics of Structures and Pointers
  - Activity 2: Array of Structures with Functions
  - Activity 3: Debugging Code with Pointers and Functions

## Learning Objectives

By the end of this session, you will be able to:
- Understand the relationship between structures and pointers.
- Implement and manipulate arrays of structures with functions.
- Debug common issues involving structures and pointers in C.

---

### Happy Learning!

# IPC SLG Session: Activities

## Activity 1: Basics of Structures and Pointers

### Problem Description
1. Define a structure `Student` with the following fields:
   - `int rollNo`
   - `char name[50]`
   - `float marks`
2. Write a function `printStudentDetails` that:
   - Takes a pointer to a `Student` structure.
   - Prints the details of the student.
3. In `main`:
   - Create a `Student` structure.
   - Populate its fields.
   - Call the `printStudentDetails` function using a pointer.

### Sample Code Skeleton
```c
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void printStudentDetails(struct Student *s) {
    // Implement this
}

int main() {
    struct Student student = {1, "John Doe", 85.5};
    // Call the function
    return 0;
}
```

---

## Activity 2: Array of Structures and Functions

### Problem Description
1. Define a structure `Book` with the following fields:
   - `int id`
   - `char title[100]`
   - `float price`
2. Write a function `findMostExpensiveBook` that:
   - Takes an array of `Book` structures and its size.
   - Returns the index of the most expensive book.
3. In `main`:
   - Create an array of 3 `Book` structures.
   - Populate their fields.
   - Find and print the most expensive book.

### Sample Code Skeleton
```c
#include <stdio.h>

struct Book {
    int id;
    char title[100];
    float price;
};

int findMostExpensiveBook(struct Book books[], int size) {
    // Implement this
    return 0; // Return the index of the most expensive book
}

int main() {
    struct Book books[3] = {
        {1, "C Programming", 29.99},
        {2, "Data Structures", 35.50},
        {3, "Algorithms", 40.00}
    };
    // Call the function and print the result
    return 0;
}
```

---

## Activity 3: Debugging a Code Snippet

### Problem Description
Debug the following code snippet to ensure the employee's salary is updated correctly. Identify and fix the errors.

```c
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void updateSalary(struct Employee emp, float increment) {
    emp.salary += increment;
}

int main() {
    struct Employee e1 = {101, "Alice", 50000};
    updateSalary(&e1, 5000);
    printf("Updated Salary: %.2f\n", e1.salary);
    return 0;
}
```

