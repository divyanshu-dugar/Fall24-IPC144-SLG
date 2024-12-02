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
