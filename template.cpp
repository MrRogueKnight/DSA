#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Your solution here
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

// Test runner
void runTestCases() {
    Solution sol;
    vector<pair<vector<int>, int>> tests = {
        {{12, 35, 1, 10, 34, 1}, 34},
        {{10, 5, 10}, 5},
        {{10, 10, 10}, -1},
        {{1, 2, 3, 4, 5}, 4},
        {{5, 4, 3, 2, 1}, 4},
        {{-1, -2, -3, -4}, -2},
        {{1}, -1},
        {{2, 2, 2, 2}, -1},
        {{10, 5, 8, 12, 12, 7}, 10}
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
    
    // Uncomment to run test cases
    runTestCases();
    
    // Uncomment for manual testing
    // manualTest();
    
    // Keep console open
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
