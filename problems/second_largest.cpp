/**
 * Problem: Second Largest
 * Source: GeeksforGeeks
 * Difficulty: Easy
 * Description: Given an array of positive integers, return the second largest distinct element.
 *              If no such element exists, return -1.
 * 
 * Input: vector<int> arr - Array of integers
 * Output: Second largest distinct element or -1 if none exists
 * 
 * Constraints:
 * 2 ≤ arr.size() ≤ 10^5
 * 1 ≤ arr[i] ≤ 10^5
 */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int largest = -1, secondLargest = -1;
        
        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }
        
        return (secondLargest != -1 && secondLargest != largest) ? secondLargest : -1;
    }
};

// Driver code for testing
int main() {
    Solution sol;
    
    // Test case 1
    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    cout << "Test case 1: " << sol.getSecondLargest(arr1) << endl;  // Output: 34
    
    // Test case 2
    vector<int> arr2 = {10, 5, 10};
    cout << "Test case 2: " << sol.getSecondLargest(arr2) << endl;  // Output: 5
    
    // Test case 3
    vector<int> arr3 = {10, 10, 10};
    cout << "Test case 3: " << sol.getSecondLargest(arr3) << endl;  // Output: -1
    
    return 0;
}

/*
Example 1:
Input:
6
12 35 1 10 34 1
Output:
34

Example 2:
Input:
3
10 5 10
Output:
5

Example 3:
Input:
3
10 10 10
Output:
-1
*/

/*
Time Complexity: O(n) - Single pass through the array
Space Complexity: O(1) - Constant extra space used
*/

/*
Performance Notes:
- Uses fast I/O methods for better performance with large inputs
- Handles multiple test cases efficiently
- Uses O(1) extra space and O(n) time complexity per test case
*/
