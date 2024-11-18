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

## Activity 1: Basics of Structures and Pointers [15 mins]

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

---

## Activity 2: Array of Structures and Functions [30 mins]

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

---

## Activity 3: Debugging a Code Snippet [15]

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
    updateSalary(e1, 5000); // struct Employee* emp = &e1, float increment = 5000
    printf("Updated Salary: %.2f\n", e1.salary);
    return 0;
}
```
---

Discussion Questions [20]
1. Why do we use pointers in structures?
2. How does the -> operator differ from the . operator when accessing structure members?
3. How do we pass an array of structures to a function?
4. What are other possible use cases for arrays of structures in real-world scenarios?
5. Why wasn’t the salary updated in the debugging activity (Activity 3)?
6. When should you pass a structure by value versus by reference in a function?
7. What changes were required to fix the code in Activity 3, and why?
8. What are the advantages of reusing functions like findMostExpensiveBook for similar problems in the future?</ul>
