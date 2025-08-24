#include <bits/stdc++.h>
using namespace std;

// Uncomment to read from input.txt for local testing
// #define LOCAL_TEST

class Solution {
public:
    /*
     * Problem: Second Largest Element
     * Source: GeeksforGeeks
     * 
     * Given an array of integers, return the second largest distinct element.
     * If no such element exists, return -1.
     * 
     * Example 1:
     * Input: [12, 35, 1, 10, 34, 1]
     * Output: 34
     * 
     * Example 2:
     * Input: [10, 10, 10]
     * Output: -1
     */
    int print2largest(int arr[], int n) {
        if (n < 2) return -1;  // Need at least 2 elements to have a second largest
        
        int largest = arr[0];
        int secondLargest = INT_MIN;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }
        
        return (secondLargest != INT_MIN) ? secondLargest : -1;
    }
};

// Test runner
void runTestCases() {
    Solution sol;
    
    // Test case format: {{array, size}, expected_result, "Test description"}
    vector<pair<pair<vector<int>, int>, int>> tests = {
        {{{12, 35, 1, 10, 34, 1}, 6}, 34},
        {{{10, 10, 10}, 3}, -1},
        {{{5, 10}, 2}, 5},
        {{{1, 2, 3, 4, 5}, 5}, 4},
        {{{5, 4, 3, 2, 1}, 5}, 4},
        {{{-1, -2, -3, -4}, 4}, -2},
        {{{1}, 1}, -1},
        {{{2, 2, 2, 2}, 4}, -1},
        {{{10, 5, 8, 12, 12, 7}, 6}, 10}
    };

    cout << "\n=== Running Test Cases ===\n";
    int passed = 0;
    
    for (size_t i = 0; i < tests.size(); i++) {
        auto &test = tests[i];
        int result = sol.print2largest(const_cast<int*>(test.first.first.data()), test.first.second);
        bool isPassed = (result == test.second);
        
        cout << "\nTest " << (i + 1) << ": ";
        cout << "[";
        for (size_t j = 0; j < test.first.first.size(); j++) {
            cout << test.first.first[j];
            if (j < test.first.first.size() - 1) cout << ", ";
        }
        cout << "] => " << result;
        
        if (isPassed) {
            cout << " [PASS]";
            passed++;
        } else {
            cout << " [FAIL] Expected: " << test.second;
        }
    }
    
    cout << "\n\n=== Results ===";
    cout << "\nPassed: " << passed << "/" << tests.size();
    cout << "\n==================\n";
}

// For manual testing
void manualTest() {
    Solution sol;
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = sol.print2largest(arr.data(), n);
    cout << "Second largest: " << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifdef LOCAL_TEST
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif

    // Uncomment one of the following:
    runTestCases();    // For automated testing
    // manualTest();    // For manual input testing
    
    // Show completion message and exit
    cout << "\nTest execution completed. Exiting..." << endl;
    return 0;
}

/*
Time Complexity: O(n) - Single pass through the array
Space Complexity: O(1) - Constant extra space used
*/

/*
Key Insights:
1. Uses two variables to track the largest and second largest elements
2. Handles edge cases like all elements being the same
3. Works with both positive and negative numbers
4. Returns -1 when there's no second largest distinct element
*/
