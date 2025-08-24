# Move Zeroes to End

## Problem Statement
Given an array of integers, move all zeros to the end while maintaining the relative order of the non-zero elements. The operation must be performed in place.

## How to Run

### Prerequisites
- C++11 or later
- g++ compiler

### Using the Batch File (Recommended)
1. Open a command prompt in this directory
2. Run the batch file:
   ```
   .\run.bat
   ```
   This will automatically compile and run the solution.

### Manual Compilation and Execution
1. First, compile the solution:
   ```bash
   g++ -std=c++11 solution.cpp -o solution
   ```
2. Then run the executable:
   ```bash
   .\solution
   ```

### Quick One-Liner
Alternatively, you can compile and run in one command:
```bash
g++ -std=c++11 solution.cpp -o solution && .\solution
```

## Solution Details
- **Time Complexity**: O(n) - Single pass through the array
- **Space Complexity**: O(1) - In-place modification

## Test Cases
1. Mixed zeros and non-zeros: `[1, 2, 0, 4, 3, 0, 5, 0]` → `[1, 2, 4, 3, 5, 0, 0, 0]`
2. No zeros in array: `[10, 20, 30]` → `[10, 20, 30]`
3. All zeros: `[0, 0, 0]` → `[0, 0, 0]`
4. Zeros at start and middle: `[0, 0, 1, 2, 0, 3]` → `[1, 2, 3, 0, 0, 0]`
5. Single element (non-zero): `[1]` → `[1]`
6. Single element (zero): `[0]` → `[0]`

## Template Usage
To use this as a template for other problems:
1. Copy the entire directory
2. Rename the directory to your problem name
3. Modify `solution.cpp` with your problem solution
4. Update the test cases in `runTestCases()`
5. Update this README.md with your problem details
