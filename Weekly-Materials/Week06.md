## Pointers, Structures, Arrays of Structures, and Passing Structures to Functions

Welcome to today’s SLG session! We’ll be diving into pointers, structures, arrays of structures, and how to pass structures into functions. Each question is designed to build a foundational understanding through hands-on practice.

### 1. **Understanding Pointers Basics**
   - What is a pointer in C/C++?
   - Write a simple C/C++ program that declares an integer variable, assigns it a value, and then creates a pointer to that integer. Print the address and value of the variable using the pointer.

### 2. **Pointers with Arrays**
   - How can you use a pointer to iterate over an array?
   - Write a function that takes a pointer to an array and the array’s size as parameters and prints each element in the array.

### 3. **Introduction to Structures**
   - Define a structure called `Student` with fields for `name` (a string of 50 characters), `age` (integer), and `GPA` (float).
   - Create an instance of `Student`, assign values to its fields, and print them.

### 4. **Pointers with Structures**
   - How can you create a pointer to a structure?
   - Write a program that declares a `Student` structure, creates a pointer to it, assigns values to the fields using the pointer, and prints the values.

### 5. **Array of Structures**
   - What is an array of structures, and when might it be useful?
   - Using the `Student` structure, declare an array of 3 students. Assign values to each `Student` and print out each student’s details.
   
### 6. **Passing Structures to Functions**
   - Explain the difference between passing a structure by value and by reference.
   - Write a function `printStudentDetails` that takes a `Student` structure as a parameter and prints its details. Call the function with a `Student` instance.

### 7. **Passing Structure by Reference**
   - Modify the `printStudentDetails` function to take a pointer to a `Student` instead of a structure by value. What changes do you observe in how the function works?
   - Write a function `updateStudentGPA` that takes a pointer to a `Student` and updates its GPA. Demonstrate this function with a `Student` instance.

### 8. **Array of Structures in Functions**
   - Write a function `printAllStudents` that takes an array of `Student` structures and its size as parameters, then prints the details of each student.
   - How does passing an array of structures differ from passing a single structure by reference?

### 10. **Advanced: Function Returning a Structure**
   - Write a function `createStudent` that returns a `Student` structure. The function should take parameters for name, age, and GPA, create a `Student` structure with these values, and return it. 
   - What are the pros and cons of returning structures directly from functions?

---

**Happy coding!**
