/**
 * Problem: [Problem Name]
 * Source: [Source (CodeChef, CodeForces, GeeksforGeeks, etc.)]
 * Difficulty: [Easy/Medium/Hard]
 * Description: [Brief description of the problem]
 * 
 * This template provides a clean way to solve competitive programming problems.
 * It includes fast I/O and helper methods for common input patterns.
 * 
 * To use:
 * 1. Fill in the problem details above
 * 2. Implement your solution in the SOLUTION block
 * 3. Use the provided helper methods to read input
 * 4. Print your output directly (or return a value if using automatic output)
 */

#include "../dsa_template.h"

/*
 * Available helper methods:
 * - int readInt() - Reads a single integer
 * - long long readLong() - Reads a single 64-bit integer
 * - string readString() - Reads a space/newline separated string
 * - vector<int> readIntArray() - Reads N followed by N integers
 * - vector<long long> readLongArray() - Reads N followed by N 64-bit integers
 * - vector<string> readStringArray() - Reads N followed by N strings
 * - vector<vector<int>> read2DIntArray() - Reads rows, cols, then rows*cols integers
 * 
 * Output helpers:
 * - void printArray(const vector<T>& arr) - Prints space-separated array elements
 * - void print2DArray(const vector<vector<T>>& matrix) - Prints 2D array with rows on new lines
 */

SOLUTION(void) {
    // Read number of test cases
    int T = readInt();
    
    while (T--) {
        // Read input for current test case
        // Example: Read N integers
        // vector<int> arr = readIntArray();
        
        // Your solution here
        
        // Print output for current test case
        // cout << result << "\n";
    }
} END_SOLUTION

/*
Example Problem: Sum of Array
----------------------------
SOLUTION(void) {
    int T = readInt();
    while (T--) {
        vector<int> arr = readIntArray();
        int sum = 0;
        for (int num : arr) sum += num;
        cout << sum << "\n";
    }
} END_SOLUTION
*/

/*
Example Input:
2
5
1 2 3 4 5
3
10 20 30

Example Output:
15
60
*/

/*
Time Complexity: O(N) per test case
Space Complexity: O(1) extra space
*/