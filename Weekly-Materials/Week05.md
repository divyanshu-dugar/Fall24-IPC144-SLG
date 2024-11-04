# Week - 05 

## 1. Coding Question: Creative Programming Problem: Fitness Tracking App

### Scenario:

You are tasked with developing a **fitness tracking app** that monitors a user’s **daily activity** including steps taken, water intake, and calories burned. The app will generate a **weekly summary report** based on the user's activity, and notify them whether they've reached their goals.

### Objectives:
- Use **conditional structures** (`if`, `if-else`, `if-else-if`) to give personalized notifications based on user progress.
- Use **three types of loops** (`for`, `while`, `do-while`) to process and calculate weekly statistics.
- Use **arithmetic, logical, and relational expressions** for performing calculations and comparisons.

---

### Group 1 - Conditional Statements Task

#### Task Description:
Your job is to provide **feedback based on the user's daily activity**.

#### Steps:
1. **Goal Check**: The user has daily goals for:
   - **Steps**: 10,000 steps
   - **Water Intake**: 2.5 liters
   - **Calories Burned**: 500 calories

2. **Conditionals**: Implement the following logic to generate notifications:
   - **If (Steps)**: If the user reaches or exceeds **10,000 steps**, display a congratulations message.
   - **If-Else (Water Intake)**: 
     - If the user drinks **more than 2.5 liters**, display a "Great hydration" message.
     - Else, display a message encouraging more water intake.
   - **If-Else-If (Calories Burned)**:
     - If the user burns **more than 500 calories**, display "Great job, you're burning calories fast!"
     - If the user burns **exactly 500 calories**, display "Perfect calorie goal achieved."
     - Else, encourage more activity to burn more calories.

#### Example Input for Group 1:

```text
Steps: 10500
Water Intake: 2.3 liters
Calories Burned: 480
```

#### Expected Output for Group 1:

```text
Congrats! You’ve achieved your step goal!
Drink more water to stay hydrated.
You need to be more active to burn more calories.
```

---

### Group 2 - Loops & Expressions Task

#### Task Description:
Your task is to calculate and display the **total weekly statistics** based on user input for each day.

#### Steps:
1. **Using Loops**:
   - Use a **for loop** to input the number of steps, water intake, and calories burned for **7 days** (a week).
   - Use a **while loop** to calculate the **total weekly steps** and **total calories burned**.
   - Use a **do-while loop** to calculate the **average water intake** for the week.

2. **Calculations**:
   - Total and average **steps** for the week.
   - Total and average **calories burned** for the week.
   - Total and average **water intake** for the week.

3. **Goal Checks**:
   - Did the user meet their **weekly step goal** of 70,000 steps?
   - Did the user maintain an average **daily water intake** greater than 2.5L?
   - Did the user burn at least **3,500 calories** over the week?

#### Example Input for Group 2:

```text
Day 1: Steps: 9000, Water: 2.6L, Calories: 480
Day 2: Steps: 10500, Water: 2.8L, Calories: 550
Day 3: Steps: 8000, Water: 2.0L, Calories: 450
...
```

#### Expected Output for Group 2:

```text
Total steps this week: 71,000
Congrats! You’ve met your weekly step goal.

Total calories burned this week: 3,500
Great! You’ve met your calorie burn goal.

Average water intake: 2.45L
Keep hydrating, you're slightly below the daily goal.
```

---

### Summary:

- **Group 1** will focus on using conditionals (`if`, `if-else`, `if-else-if`) to give feedback on daily progress.
- **Group 2** will focus on using **loops** to process and calculate weekly statistics, and will integrate arithmetic, relational, and logical expressions to check whether the user met their fitness goals.

This problem provides a practical example of how key programming concepts are used to implement real-world features such as **tracking fitness goals**.

--- 

## 2. Walkthough Question

![Walkthrough](https://github.com/user-attachments/assets/7bbfdb98-0df5-406e-b23e-ccb46aff2a0c)
