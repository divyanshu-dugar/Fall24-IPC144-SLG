### SLG Session Activities: IPC144 - File I/O and Structs (Answers)

---

## Activity 1: File I/O Basics - Reading and Writing to a File
### Answer:
```c
#include <stdio.h>

int main() {
    FILE *filePtr;

    // Step 1: Write to the file
    filePtr = fopen("data.txt", "w");
    if (filePtr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(filePtr, "Line 1: Hello, world!\n");
    fprintf(filePtr, "Line 2: Learning File I/O.\n");
    fprintf(filePtr, "Line 3: C programming is fun.\n");
    fclose(filePtr);

    // Step 2: Append to the file
    filePtr = fopen("data.txt", "a");
    if (filePtr == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }
    fprintf(filePtr, "Line 4: Adding more content.\n");
    fprintf(filePtr, "Line 5: File I/O is powerful!\n");
    fclose(filePtr);

    // Step 3: Read and print the file content
    filePtr = fopen("data.txt", "r");
    if (filePtr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, 100, filePtr) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePtr);

    return 0;
}
```

---

## Activity 2: Using Pointers with File I/O
### Answer:
```c
#include <stdio.h>

int main() {
    FILE *filePtr = fopen("numbers.txt", "r");
    if (filePtr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int num, sum = 0;
    int *ptr = &sum; // Pointer to store the sum

    printf("Numbers read from the file:\n");
    while (fscanf(filePtr, "%d", &num) == 1) {
        printf("%d ", num);
        *ptr += num; // Use pointer to update the sum
    }
    fclose(filePtr);

    printf("\nSum of numbers: %d\n", *ptr);

    return 0;
}
```

---

## Activity 3: File I/O with Structures and Arrays
### Answer:
```c
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LEN 50

struct Student {
    int id;
    char name[MAX_NAME_LEN];
    float marks;
};

int main() {
    FILE *filePtr = fopen("students.txt", "r");
    if (filePtr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Student students[MAX_STUDENTS];
    int count = 0;

    // Read data from the file
    while (fscanf(filePtr, "%d %s %f", &students[count].id, students[count].name, &students[count].marks) == 3) {
        count++;
        if (count >= MAX_STUDENTS) {
            printf("Max students limit reached.\n");
            break;
        }
    }
    fclose(filePtr);

    // Print student data
    printf("Student Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
```

**Note for `students.txt` file**:
```
101 John 85.5
102 Alice 90.0
103 Bob 78.5
```
