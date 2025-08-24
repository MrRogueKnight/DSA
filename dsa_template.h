#ifndef DSA_TEMPLATE_H
#define DSA_TEMPLATE_H

// Standard C++ Headers
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <limits>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <numeric>     // gcd, lcm, accumulate
#include <functional>  // function, greater, less
#include <iomanip>     // setprecision
#include <sstream>     // stringstream
#include <cstring>     // memset, memcpy
#include <cassert>     // assert
#include <cstdio>      // freopen, printf
#include <cstdlib>     // abs, rand
#include <ctime>       // time (if you ever need randomness seeding)

// Namespace
using namespace std;

// Fast I/O optimization
inline void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// IO Setup with file redirection
inline void setupIO(bool useFiles = true, 
                   string inputFile = "input.txt", 
                   string outputFile = "output.txt") {
    fastIO();
    
    if (!useFiles) return;
    
#ifndef ONLINE_JUDGE
    if (!inputFile.empty()) {
        freopen(inputFile.c_str(), "r", stdin);
    }
    if (!outputFile.empty()) {
        freopen(outputFile.c_str(), "w", stdout);
    }
#endif
}

// Base class with common functionality for all solutions
class BaseSolution {
protected:
    // Fast I/O helpers
    inline int readInt() {
        int x = 0, sign = 1;
        char c = getchar();
        while (c < '0' || c > '9') {
            if (c == '-') sign = -1;
            c = getchar();
        }
        while (c >= '0' && c <= '9') {
            x = x * 10 + (c - '0');
            c = getchar();
        }
        return x * sign;
    }
    
    inline long long readLong() {
        long long x = 0, sign = 1;
        char c = getchar();
        while (c < '0' || c > '9') {
            if (c == '-') sign = -1;
            c = getchar();
        }
        while (c >= '0' && c <= '9') {
            x = x * 10 + (c - '0');
            c = getchar();
        }
        return x * sign;
    }
    
    inline string readString() {
        string s;
        char c = getchar();
        while (c == ' ' || c == '\n') c = getchar();
        while (c != ' ' && c != '\n' && c != EOF) {
            s += c;
            c = getchar();
        }
        return s;
    }
    
    inline vector<int> readIntArray() {
        int n = readInt();
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = readInt();
        }
        return arr;
    }
    
    inline vector<long long> readLongArray() {
        int n = readInt();
        vector<long long> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = readLong();
        }
        return arr;
    }
    
    inline vector<string> readStringArray() {
        int n = readInt();
        vector<string> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = readString();
        }
        return arr;
    }
    
    inline vector<vector<int>> read2DIntArray() {
        int rows = readInt();
        int cols = readInt();
        vector<vector<int>> matrix(rows, vector<int>(cols));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                matrix[i][j] = readInt();
            }
        }
        return matrix;
    }
    
    // Output helpers
    template<typename T>
    void printArray(const vector<T>& arr) {
        for (int i = 0; i < arr.size(); ++i) {
            if (i > 0) cout << " ";
            cout << arr[i];
        }
        cout << "\n";
    }
    
    template<typename T>
    void print2DArray(const vector<vector<T>>& matrix) {
        for (const auto& row : matrix) {
            for (int i = 0; i < row.size(); ++i) {
                if (i > 0) cout << " ";
                cout << row[i];
            }
            cout << "\n";
        }
    }
};

// Main solution macro - use this to define your solution
#define SOLUTION(return_type) \
    class Solution : public BaseSolution { \
    public: \
        return_type solve() {

#define END_SOLUTION \
        } \
    }; \
    int main() { \
        setupIO(); \
        Solution s; \
        auto result = s.solve(); \
        if constexpr (is_same_v<decltype(result), void>::value) { \
            // solve() handles its own output \
        } else if constexpr (is_same_v<decltype(result), vector<int>>) { \
            s.printArray(result); \
        } else if constexpr (is_same_v<decltype(result), vector<long long>>) { \
            s.printArray(result); \
        } else if constexpr (is_same_v<decltype(result), vector<string>>) { \
            s.printArray(result); \
        } else if constexpr (is_same_v<decltype(result), vector<vector<int>>>) { \
            s.print2DArray(result); \
        } else if constexpr (is_same_v<decltype(result), vector<vector<long long>>>) { \
            s.print2DArray(result); \
        } else { \
            cout << result << "\n"; \
        } \
        return 0; \
    }

// Common type definitions
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

// Common constants
const int INF = 0x3f3f3f3f;
const ll INF_LL = 0x3f3f3f3f3f3f3f3f;
const double PI = acos(-1.0);
const int MOD = 1e9 + 7;

// Common macros
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repn(i, n) rep(i, 0, n)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define pern(i, n) per(i, 0, n)

#endif // DSA_TEMPLATE_H
