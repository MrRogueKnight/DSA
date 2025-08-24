#include <bits/stdc++.h>
using namespace std;

// Uncomment to read from input.txt for local testing
// #define LOCAL_TEST

class Solution {
public:
    /*
     * Problem: Problem Name
     * Source: Platform (LeetCode/GeeksforGeeks/...)
     * 
     * Problem Description:
     * [Detailed problem description]
     * 
     * Example 1:
     * Input: [Sample Input]
     * Output: [Expected Output]
     * 
     * Example 2:
     * Input: [Sample Input]
     * Output: [Expected Output]
     * Input: [Sample Input]
     * Output: [Expected Output]
     * 
     * Constraints:
     * - [Constraint 1]
     * - [Constraint 2]
     */
    
    // Your solution function
    // ReturnType functionName(Parameters) {
    //     // Your solution here
    //     return result;
    // }
};

// ========== TESTING INFRASTRUCTURE ==========

// Test case structure
template<typename T, typename U>
struct TestCase {
    T input;
    U expected;
    string description;
};

// Test runner
template<typename T, typename U>
void runTestCases(const vector<TestCase<T, U>>& testCases, const function<U(T)>& solution) {
    cout << "\n=== Running Test Cases ===\n";
    int passed = 0;
    
    for (size_t i = 0; i < testCases.size(); i++) {
        const auto& test = testCases[i];
        auto result = solution(test.input);
        bool isPassed = (result == test.expected);
        
        cout << "\nTest " << (i + 1) << ": " << test.description << "\n";
        cout << "Input: ";
        // Customize input printing based on type T
        if constexpr (is_same_v<T, vector<int>>) {
            cout << "[";
            for (size_t j = 0; j < test.input.size(); j++) {
                cout << test.input[j];
                if (j < test.input.size() - 1) cout << ", ";
            }
            cout << "]";
        } else {
            cout << test.input;
        }
        
        cout << "\nExpected: " << test.expected;
        cout << "\nGot:      " << result;
        
        if (isPassed) {
            cout << "\nStatus:   [PASS]\n";
            passed++;
        } else {
            cout << "\nStatus:   [FAIL]\n";
        }
    }
    
    cout << "\n=== Results ===";
    cout << "\nPassed: " << passed << "/" << testCases.size();
    cout << " (" << (passed * 100.0 / testCases.size()) << "%)";
    cout << "\n==================\n";
}

// For manual testing
void manualTest() {
    cout << "\n=== Manual Testing ===\n";
    // Example for vector<int> input
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    vector<int> input(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    Solution sol;
    // Call your solution function here
    // auto result = sol.yourFunction(input);
    // cout << "Result: " << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifdef LOCAL_TEST
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif

    // Example test cases (modify according to your problem)
    vector<TestCase<vector<int>, int>> testCases = {
        {{1, 2, 3, 4, 5}, 4, "Simple increasing sequence"},
        {{5, 4, 3, 2, 1}, 4, "Simple decreasing sequence"},
        {{1, 1, 1, 1}, -1, "All elements same"},
        {{1, 2}, 1, "Only two elements"},
        {{1}, -1, "Single element"}
    };

    Solution sol;
    // Uncomment and modify the following line to run tests
    // runTestCases<vector<int>, int>(testCases, [&](vector<int> input) { return sol.yourFunction(input); });

    // Uncomment for manual testing
    // manualTest();
    
    // Keep console open
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}

/*
Time Complexity: O()
Space Complexity: O()

Key Insights:
1. 
2. 
3. 
*/

/*
Example 1:
Input: [1, 2, 3, 4, 5]
Output: 4

Example 2:
Input: [5, 4, 3, 2, 1]
Output: 4
*/
    };

    cout << "\n=== Running Test Cases ===\n";
    int passed = 0;
    
    for (size_t i = 0; i < tests.size(); i++) {
        auto &test = tests[i];
        int result = sol.getSecondLargest(test.first);
        bool isPassed = (result == test.second);
        
        cout << "\nTest " << (i + 1) << ": ";
        cout << "[";
        for (size_t j = 0; j < test.first.size(); j++) {
            cout << test.first[j];
            if (j < test.first.size() - 1) cout << ", ";
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
    
    int result = sol.getSecondLargest(arr);
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
    
    // Keep console open
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}

/*
Example 1:
Input:
[Sample Input]
Output:
{{ ... }}

Example 2:
Input:
[Sample Input]
Output:
[Expected Output]
*/

// To compile: g++ solution.cpp -o solution
// To run: .\solution
