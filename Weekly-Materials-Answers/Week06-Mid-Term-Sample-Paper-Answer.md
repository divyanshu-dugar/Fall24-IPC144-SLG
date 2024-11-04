## Coding Answer

```c
#include <stdio.h>

int getNumberOfStudents() {
    int num;
    do {
        printf("Enter the number of students: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

void inputGrades(int grades[], int size) {
    for (int i = 0; i < size; i++) {
        do {
            printf("Enter grade for student %d (0 - 100): ", i + 1);
            scanf("%d", &grades[i]);
        } while (grades[i] < 0 || grades[i] > 100);
    }
}

float calculateAverage(int grades[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return (float)sum / size;
}

int findHighestGrade(int grades[], int size) {
    int highest = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

float calculatePassPercentage(int grades[], int size) {
    int passCount = 0;
    for (int i = 0; i < size; i++) {
        if (grades[i] >= 50) {
            passCount++;
        }
    }
    return (float)passCount / size * 100;
}

void displayResults(float average, int highestGrade, float passPercentage) {
    printf("Average grade: %.2f\n", average);
    printf("Highest grade: %d\n", highestGrade);
    printf("Pass percentage: %.2f%%\n", passPercentage);
}

int main() {
    int numberOfStudents = getNumberOfStudents();
    int grades[numberOfStudents];

    inputGrades(grades, numberOfStudents);

    float average = calculateAverage(grades, numberOfStudents);
    int highestGrade = findHighestGrade(grades, numberOfStudents);
    float passPercentage = calculatePassPercentage(grades, numberOfStudents);

    displayResults(average, highestGrade, passPercentage);

    return 0;
}
```

## Walkthrough Answer
| plopWeight | plops | d | i | f |
| --- | --- | --- | --- | --- |
| 76.5 | 55 | 158.0 | 156 | 155.0 |
|  |  | 76.5 | 155 | 152.5 |
|  |  | 25.25 |  | 50.50 |
|  |  | 55.50 |  | 55.50 |

Output:
```txt
Baaa...158.00-->Cackle...155-->Honk...155.0-->Bleat...
Baaa...25.25-->Honk...50.5-->Bleat...
Animals plopped: 55 times
Total plop weight: 76.50 lbs.
```
