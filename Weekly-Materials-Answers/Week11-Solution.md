

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
