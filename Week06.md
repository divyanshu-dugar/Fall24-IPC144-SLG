# Mid-Term Sample Paper #1

<b>The paper is divided into 3 sections:</b>
<ul>
  <i>
  <li>Part A - Interview Questions</li>
  <li>Part B - Coding Question</li>
  <li>Part C - Walkthrough</li>
  </i>
</ul>

## Part A - Interview Questions

<b>Explain the following:</b>
<ul>
  <i>
  <li>Magic Numbers</li>
  <li>Flags, also explain how do they enforce single entry and single exit principle</li>
  <li>Compilation Process in C</li>
  <li>Auto Sizing Vs Explicit sizing of the arrays</li>
  <li>It is better to work with currency as integers rather than floating point. Why?</li>
  <li>Advantages of Style Guidelines and Disadvantages of not maintaing style guidelines</li>
  <li>What is the significance of the number preceding the (.) in the display of the floating point numbers? Provide explanations with reference to %3.5 lf and %0.5lf formatting?</li>
  <li>Coupling</li>
  <li>Modular Design</li>
  </i>
</ul>


## Part B - Coding Question

### C Programming Assignment

Write a C program that allows a user to input the grades of a group of students and calculates the total average, the highest grade, and the percentage of students who passed (defined as having a grade of 50 or more). The program should include the following functions:

1. **`int getNumberOfStudents()`**  
   This function will prompt the user to input the total number of students. It will validate that the number is positive and return the value.

2. **`void inputGrades(int grades[], int size)`**  
   This function will prompt the user to input the grades for each student, store them in the array, and validate that each grade is between 0 and 100.

3. **`float calculateAverage(int grades[], int size)`**  
   This function will take the grades array and the number of students as input, calculate the average grade, and return the result.

4. **`int findHighestGrade(int grades[], int size)`**  
   This function will find and return the highest grade in the grades array.

5. **`float calculatePassPercentage(int grades[], int size)`**  
   This function will calculate the percentage of students who scored 50 or more (passed) and return this percentage.

6. **`void displayResults(float average, int highestGrade, float passPercentage)`**  
   This function will display the average grade, the highest grade, and the percentage of students who passed.

---

### Sample `main()` for Testing:

```c
#include <stdio.h>

// Function prototypes
int getNumberOfStudents();
void inputGrades(int grades[], int size);
float calculateAverage(int grades[], int size);
int findHighestGrade(int grades[], int size);
float calculatePassPercentage(int grades[], int size);
void displayResults(float average, int highestGrade, float passPercentage);

int main() {
    // Get the number of students
    int numberOfStudents = getNumberOfStudents();

    // Create an array to store grades
    int grades[numberOfStudents];

    // Input grades for the students
    inputGrades(grades, numberOfStudents);

    // Calculate the average grade
    float average = calculateAverage(grades, numberOfStudents);

    // Find the highest grade
    int highestGrade = findHighestGrade(grades, numberOfStudents);

    // Calculate the percentage of students who passed
    float passPercentage = calculatePassPercentage(grades, numberOfStudents);

    // Display the results
    displayResults(average, highestGrade, passPercentage);

    return 0;
}
```
---

## Part C - Walkthough Question
![Walkthrough-Without-Arrays](https://github.com/user-attachments/assets/79501d2c-3b98-4a29-a023-4e704944aa5c)

---

###
