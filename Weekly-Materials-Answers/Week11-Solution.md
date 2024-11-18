

### Answers File (`answers.md`)

# IPC SLG Session: Answers

## Activity 1: Basics of Structures and Pointers

### Solution
```c
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void printStudentDetails(struct Student *s) {
    printf("Roll No: %d\n", s->rollNo);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

int main() {
    struct Student student = {1, "John Doe", 85.5};
    printStudentDetails(&student);
    return 0;
}
```

---

## Activity 2: Array of Structures and Functions

### Solution
```c
#include <stdio.h>

struct Book {
    int id;
    char title[100];
    float price;
};

int findMostExpensiveBook(struct Book books[], int size) {
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (books[i].price > books[index].price) {
            index = i;
        }
    }
    return index;
}

int main() {
    struct Book books[3] = {
        {1, "C Programming", 29.99},
        {2, "Data Structures", 35.50},
        {3, "Algorithms", 40.00}
    };
    int mostExpensive = findMostExpensiveBook(books, 3);
    printf("Most Expensive Book: %s (Price: %.2f)\n", books[mostExpensive].title, books[mostExpensive].price);
    return 0;
}
```

---

## Activity 3: Debugging a Code Snippet

### Solution
```c
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void updateSalary(struct Employee *emp, float increment) {
    emp->salary += increment;
}

int main() {
    struct Employee e1 = {101, "Alice", 50000};
    updateSalary(&e1, 5000);
    printf("Updated Salary: %.2f\n", e1.salary);
    return 0;
}
```

---

### **Answers to Discussion Questions**

1. **Why do we use pointers in structures?**  
   - Pointers allow us to efficiently pass structures to functions without copying the entire structure. This saves memory and time, especially when working with large structures. Additionally, pointers enable functions to directly modify the structure's members.

2. **How does the `->` operator differ from the `.` operator when accessing structure members?**  
   - The `.` operator is used to access members of a structure directly, while the `->` operator is used to access members via a pointer to a structure. For example:  
     - `student.name` accesses `name` directly from the structure `student`.  
     - `studentPtr->name` accesses `name` through a pointer `studentPtr` that points to the structure.

3. **How do we pass an array of structures to a function?**  
   - Arrays of structures are passed to functions by providing the array's name (which decays to a pointer to the first element) and the size of the array. The function can iterate through the array using the pointer and size. For example:
     ```c
     void processBooks(struct Book books[], int size) {
         for (int i = 0; i < size; i++) {
             printf("%s\n", books[i].title);
         }
     }
     ```

4. **What are other possible use cases for arrays of structures in real-world scenarios?**  
   - Arrays of structures are useful in scenarios where we need to manage and organize collections of related data, such as:
     - Managing student records in a school system.
     - Storing details of inventory items in a warehouse.
     - Keeping track of employee information in an organization.
     - Storing game characters and their attributes in a gaming application.

5. **Why wasn’t the salary updated in the debugging activity (Activity 3)?**  
   - The `updateSalary` function was passing the structure by value, meaning a copy of the structure was modified, not the original structure. Changes made to the copy were lost when the function returned.

6. **When should you pass a structure by value versus by reference in a function?**  
   - **By Value:** Use this when you want to work with a copy of the structure and avoid modifying the original data.  
   - **By Reference:** Use this when you need to modify the original structure or when the structure is large and passing it by reference is more efficient.

7. **What changes were required to fix the code in Activity 3, and why?**  
   - To fix the code, the `updateSalary` function needed to accept a pointer to the structure instead of a copy:
     ```c
     void updateSalary(struct Employee *emp, float increment) {
         emp->salary += increment;
     }
     ```
     This allowed the function to directly modify the salary of the original structure.

8. **What are the advantages of reusing functions like `findMostExpensiveBook` for similar problems in the future?**  
   - Functions like `findMostExpensiveBook` are modular and reusable. They can be applied to different datasets with similar structures without rewriting the logic, enhancing code efficiency and maintainability. It also promotes cleaner, more organized code.

---
