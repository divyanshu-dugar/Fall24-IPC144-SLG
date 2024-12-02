## Coding Questions

#### **Question 1 (4 marks)**  
**Write the following function:**  
```c
void shiftPosition(struct Track* track, int steps);
```  
This function is passed a pointer to a `Track` struct and an integer `steps`. The function updates the `currentPosition` member of the `Track` by moving it `steps` forward if positive, or backward if negative. The position should not exceed the `maxPosition` of the track or go below 0. If the value goes beyond `maxPosition`, set it to `maxPosition`. If it goes below 0, set it to 0.  

---

#### **Question 2 (5 marks)**  
**Write the following function:**  
```c
void categorizeTracks(int threshold, struct Track tracks[], int size, int* above, int* below, int* equal);
```  
This function takes the following parameters:  
- `threshold`: an integer to compare the `length` member of the tracks against.  
- `tracks`: an array of `Track` structs.  
- `size`: the number of elements in the `tracks` array.  
- `above`, `below`, `equal`: pointers to integers where the function will store counts of tracks longer than, shorter than, or equal to the threshold length.  

---

#### **Question 3 (6 marks)**  
**Write the following function:**  
```c
int insertAt(struct Track* track, const char str[], int index);
```  
This function is passed a pointer to a `Track` struct, a null-terminated string `str`, and an integer `index`. It inserts the string into the `data` member of the `Track` at the specified `index`. If the insertion goes beyond the current `length`, append the string to the end. Update the `length` member to reflect the new size of the string. If the `index` is out of bounds (negative or beyond the `maxLength`), return -1; otherwise, return 0.  

---

#### **Question 4 (4 marks)**  
**Write the following function:**  
```c
void updateStatus(const char filename[], struct Track tracks[], int size, int status);
```  
This function takes the following parameters:  
- `filename`: the name of a file where track details are stored.  
- `tracks`: an array of `Track` structs.  
- `size`: the size of the `tracks` array.  
- `status`: an integer representing the new status to assign to each track.  

The function updates the `status` member of each `Track` in the array with the provided `status` value and writes each updated track's details to the file in the format:  
`<track_name> : <status>`  

---

#### **Question 5 (6 marks)**  
**Write the following function:**  
```c
int mergeTracks(struct Track* dest, struct Track* source);
```  
This function is passed two pointers to `Track` structs: `dest` and `source`. It appends the `data` from the `source` track to the `dest` track starting from the `currentPosition` in `dest`. Update the `length` of the `dest` track. If the combined length exceeds the `maxLength` of `dest`, truncate the added data to fit. Return the number of characters successfully appended.  

---

#### **Question 6 (5 marks)**  
**Write the following function:**  
```c
void printTrackDetails(const char filename[], struct Track tracks[], int size, int detailed);
```  
This function is passed:  
- `filename`: the name of the file where the track details will be saved.  
- `tracks` and `size`: an array of `Track` structs and its size.  
- `detailed`: a flag indicating whether to include extra details.  

The function writes each track’s `data` member to the file. If `detailed` is 1, include additional information, such as the `currentPosition` and `length`, in the format:  
`<track_name> (Position: <currentPosition>, Length: <length>)`.  
If `detailed` is 0, write only the `track_name`.  

--- 
