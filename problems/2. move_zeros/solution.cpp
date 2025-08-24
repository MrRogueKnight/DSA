#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*
     * Problem: Move Zeroes to End
     * 
     * Given an array of integers, move all zeros to the end while maintaining
     * the relative order of the non-zero elements.
     * 
     * Example 1:
     * Input: [1, 2, 0, 4, 3, 0, 5, 0]
     * Output: [1, 2, 4, 3, 5, 0, 0, 0]
     * 
     * Example 2:
     * Input: [0, 0, 0, 4]
     * Output: [4, 0, 0, 0]
     */
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int nonZeroIndex = 0;  // Tracks the position for the next non-zero element
        
        // First pass: Move all non-zero elements to the front
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[nonZeroIndex++] = arr[i];
            }
        }
        
        // Fill the remaining positions with zeros
        while (nonZeroIndex < n) {
            arr[nonZeroIndex++] = 0;
        }
    }
};

// Helper function to print a vector
void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) cout << ", ";
    }
    cout << "]";
}

// Test runner
void runTestCases() {
    Solution sol;
    
    // Test case format: {input, expected_output, test_description}
    vector<tuple<vector<int>, vector<int>, string>> testCases = {
        {{1, 2, 0, 4, 3, 0, 5, 0}, {1, 2, 4, 3, 5, 0, 0, 0}, "Mixed zeros and non-zeros"},
        {{10, 20, 30}, {10, 20, 30}, "No zeros in array"},
        {{0, 0, 0}, {0, 0, 0}, "All zeros"},
        {{0, 0, 1, 2, 0, 3}, {1, 2, 3, 0, 0, 0}, "Zeros at start and middle"},
        {{1, 0, 0, 0, 2}, {1, 2, 0, 0, 0}, "Zeros in middle and end"},
        {{0, 1, 0, 2, 0, 3}, {1, 2, 3, 0, 0, 0}, "Zeros at even positions"},
        {{1}, {1}, "Single element (non-zero)"},
        {{0}, {0}, "Single element (zero)"}
    };

    cout << "\n=== Running Test Cases ===\n";
    int passed = 0;
    
    for (size_t i = 0; i < testCases.size(); i++) {
        auto& test = testCases[i];
        vector<int> input = get<0>(test);
        vector<int> expected = get<1>(test);
        string desc = get<2>(test);
        
        // Make a copy for output
        vector<int> arr = input;
        
        // Run the solution
        sol.pushZerosToEnd(arr);
        
        // Check if the result matches expected
        bool isPassed = (arr == expected);
        
        cout << "\nTest " << (i + 1) << ": " << desc << "\n";
        cout << "Input:    ";
        printVector(input);
        cout << "Expected: ";
        printVector(expected);
        cout << "Got:      ";
        printVector(arr);
        
        if (isPassed) {
            cout << "Status:   [PASS]\n";
            passed++;
        } else {
            cout << "Status:   [FAIL]\n";
        }
    }
    
    cout << "\n=== Results ===";
    cout << "\nPassed: " << passed << "/" << testCases.size();
    cout << " (" << (passed * 100.0 / testCases.size()) << "%)";
    cout << "\n==================\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Run test cases
    runTestCases();
    
    // Uncomment for manual testing
    // manualTest();
    
    return 0;
}

/*
Time Complexity: O(n) - Single pass through the array
Space Complexity: O(1) - In-place modification, no extra space used

Key Insights:
1. Uses a two-pointer approach where one pointer tracks the position for the next non-zero element
2. First pass moves all non-zero elements to the front while maintaining their order
3. Fills the remaining positions with zeros
4. Handles all edge cases including all zeros, no zeros, and single-element arrays
*/
