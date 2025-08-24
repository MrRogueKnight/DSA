# Second Largest Element

Find the second largest distinct element in an array.

## Problem Description
Given an array of integers, return the second largest distinct element. If no such element exists, return -1.

## How to Run

### Prerequisites
- C++17 or later
- g++ compiler

### Running the Solution

#### Method 1: Using the run script (Recommended)
1. Open a terminal in the `1. second_largest` directory
2. Run the batch file:
   ```
   .\run.bat
   ```
   This will:
   - Compile the code
   - Run all test cases
   - Show the results

#### Method 2: Manual Compilation
1. Open a terminal in the `1. second_largest` directory
2. Compile the code:
   ```
   g++ -std=c++17 -o solution second_largest.cpp
   ```
3. Run the solution:
   ```
   .\solution
   ```

### Testing Options

#### 1. Run All Test Cases (Default)
The solution comes with predefined test cases. Just run the program to see the results.

#### 2. Manual Testing
To test with custom input:
1. Open `second_largest.cpp`
2. In the `main()` function, comment out:
   ```cpp
   runTestCases();
   ```
3. Uncomment:
   ```cpp
   // manualTest();
   ```
4. Save and run the program
5. Follow the on-screen prompts to enter your test case

#### 3. File Input Testing
To read input from `input.txt`:
1. Uncomment this line at the top of the file:
   ```cpp
   // #define LOCAL_TEST
   ```
2. Make sure `input.txt` is in the same directory
3. The program will read from `input.txt` instead of using predefined tests

## Test Cases

### Sample Input 1:
```
[12, 35, 1, 10, 34, 1]
```
Expected Output: `34`

### Sample Input 2:
```
[10, 10, 10]
```
Expected Output: `-1`

### Sample Input 3:
```
[5, 10]
```
Expected Output: `5`

## Solution Details
- **Time Complexity**: O(n) - Single pass through the array
- **Space Complexity**: O(1) - Uses constant extra space

## Notes
- The solution handles both positive and negative numbers
- Returns -1 if there's no second largest distinct element
- Edge cases (like all elements being the same) are handled
