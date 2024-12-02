### **Question 1: `shiftPosition`**
```c
void shiftPosition(struct Track* track, int steps) {
    if (track == NULL) return;

    track->currentPosition += steps;

    if (track->currentPosition < 0) {
        track->currentPosition = 0;
    } else if (track->currentPosition > track->maxPosition) {
        track->currentPosition = track->maxPosition;
    }
}
```

---

### **Question 2: `categorizeTracks`**
```c
void categorizeTracks(int threshold, struct Track tracks[], int size, int* above, int* below, int* equal) {
    if (above) *above = 0;
    if (below) *below = 0;
    if (equal) *equal = 0;

    for (int i = 0; i < size; i++) {
        if (tracks[i].length > threshold) {
            if (above) (*above)++;
        } else if (tracks[i].length < threshold) {
            if (below) (*below)++;
        } else {
            if (equal) (*equal)++;
        }
    }
}
```

---

### **Question 3: `insertAt`**
```c
int insertAt(struct Track* track, const char str[], int index) {
    if (track == NULL || str == NULL || index < 0 || index > track->length) {
        return -1;
    }

    int strLen = strlen(str);
    int newLength = track->length + strLen;

    if (newLength > track->maxLength) {
        newLength = track->maxLength;
    }

    // Shift existing data to make space for insertion
    for (int i = track->length - 1; i >= index && newLength > track->length; i--) {
        track->data[i + strLen] = track->data[i];
    }

    // Insert the string
    for (int i = 0; i < strLen && index + i < track->maxLength; i++) {
        track->data[index + i] = str[i];
    }

    track->length = newLength;
    track->data[track->length] = '\0'; // Null-terminate the string

    return 0;
}
```

---

### **Question 4: `updateStatus`**
```c
void updateStatus(const char filename[], struct Track tracks[], int size, int status) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) return;

    for (int i = 0; i < size; i++) {
        tracks[i].status = status;
        fprintf(file, "%s : %d\n", tracks[i].name, tracks[i].status);
    }

    fclose(file);
}
```

---

### **Question 5: `mergeTracks`**
```c
int mergeTracks(struct Track* dest, struct Track* source) {
    if (dest == NULL || source == NULL) return 0;

    int availableSpace = dest->maxLength - dest->length;
    int toAppend = strlen(source->data);
    if (toAppend > availableSpace) {
        toAppend = availableSpace;
    }

    strncpy(dest->data + dest->length, source->data, toAppend);
    dest->length += toAppend;
    dest->data[dest->length] = '\0'; // Null-terminate the string

    return toAppend;
}
```

---

### **Question 6: `printTrackDetails`**
```c
void printTrackDetails(const char filename[], struct Track tracks[], int size, int detailed) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) return;

    for (int i = 0; i < size; i++) {
        fprintf(file, "%s", tracks[i].name);
        if (detailed) {
            fprintf(file, " (Position: %d, Length: %d)", tracks[i].currentPosition, tracks[i].length);
        }
        fprintf(file, "\n");
    }
    fclose(file);
}
```

---

### Answer to the Walkthrough Question:

**Part 1: Fill in the blank on line 10 with the last digit of your student number.**

Since the question requires the **second-to-last** digit of your student number, you would need to replace the blank in the code with that digit. For example, if your student number was **149325227**, the second-to-last digit is **2**. So, the line would be:

```c
10. int flag = 2;
```

---

**Part 2: Exact Output of the Program**

Let’s break down the program's execution based on the student number `149325227` (using `flag = 2`).

- The program starts by concatenating the string `word1` ("happy ") to the `result` string, so the first output will be:

    ```c
    1: happy 
    ```

- Next, the program checks the condition `flag % 2 == 0`. Since `flag` is `2`, this condition is **true**, and it enters the `if` block:
    - `modifyString(word2)` is called with `word2 = "puppies "`. 
    - The `modifyString` function iterates over `word2` and converts every character at even indices to uppercase:
        - `word2` becomes `"PUPPIES "` (all letters at even indices become uppercase).
    - After modifying `word2`, it is concatenated to `result`, so now `result` becomes:
    
      ```c
      result = "happy PUPPIES "
      ```

    - The program then concatenates `word1` with `word3`, so `word1` becomes `"happy puppies barked "`.

    After this block, the program prints:

    ```c
    2: happy PUPPIES 
    3: happy puppies barked 
    ```

- Then, `word4 = "loudly "` is concatenated to `result`, so:

    ```c
    result = "happy PUPPIES loudly "
    ```

    It prints:

    ```c
    4: happy PUPPIES loudly 
    ```

- The program then copies `result` to `temp`, so `temp` becomes:

    ```c
    temp = "happy PUPPIES loudly "
    ```

    It prints:

    ```c
    5: happy PUPPIES loudly 
    6: happy PUPPIES loudly 
    ```

- The program checks if `result` and `temp` are equal. Since both are the same, it enters the `if` block:
    - `result` is set to `word5 = "yesterday "` and `temp` is appended to it, followed by `word1`. 
    - `result` becomes:

      ```c
      result = "yesterday happy PUPPIES loudly happy puppies barked "
      ```

    - The program then prints:

    ```c
    7: yesterday happy PUPPIES loudly happy puppies barked 
    ```

- Finally, it prints the value of `temp` (which was not changed):

    ```c
    8: happy PUPPIES loudly 
    ```

---

**Part 3: Table of Variable Tracking and Function Call Tracking**

| Line  | Variable       | Value                                      | Explanation                                                |
|-------|----------------|--------------------------------------------|------------------------------------------------------------|
| 1     | word1          | "happy "                                   | Initialized string.                                         |
| 2     | word2          | "puppies "                                 | Initialized string.                                         |
| 3     | word3          | "barked "                                  | Initialized string.                                         |
| 4     | word4          | "loudly "                                  | Initialized string.                                         |
| 5     | word5          | "yesterday "                               | Initialized string.                                         |
| 6     | word6          | "morning "                                 | Initialized string.                                         |
| 7     | result         | ""                                         | Empty string initially.                                     |
| 8     | temp           | ""                                         | Empty string initially.                                     |
| 10    | flag           | 2                                          | Set to 2.                                                   |
| 20    | result         | "happy "                                   | Concatenated word1 to result.                               |
| 23    | flag % 2 == 0  | True                                      | Condition check, enters the `if` block.                     |
| 24    | modifyString   | "puppies " -> "PUPPIES "                   | Function modifies word2 to uppercase at even indices.       |
| 25    | result         | "happy PUPPIES "                           | Concatenated modified word2 to result.                      |
| 26    | word1          | "happy puppies barked "                    | Concatenated word3 to word1.                                |
| 36    | result         | "happy PUPPIES loudly "                    | Concatenated word4 to result.                               |
| 39    | temp           | "happy PUPPIES loudly "                    | Copied result to temp.                                      |
| 44    | result == temp | True                                      | Condition check, enters the `if` block.                     |
| 45    | result         | "yesterday happy PUPPIES loudly happy puppies barked " | Concatenated word5, temp, and word1 to result.             |

--- 

**Final Output**:

```c
1: happy 
2: happy PUPPIES 
3: happy puppies barked 
4: happy PUPPIES loudly 
5: happy PUPPIES loudly 
6: happy PUPPIES loudly 
7: yesterday happy PUPPIES loudly happy puppies barked 
8: happy PUPPIES loudly 
```
