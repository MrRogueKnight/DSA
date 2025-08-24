# DSA Playground

A high-performance C++ template for solving Data Structures and Algorithms (DSA) problems with efficient I/O handling and a clean project structure. This template is designed to work with any coding platform and supports both class-based and function-based solutions.

## 🚀 Features

- **Pre-configured Template**: Includes all common C++ headers and utilities
- **Efficient I/O**: Fast input/output handling with helper methods
- **Flexible Structure**: Supports both class-based and function-based solutions
- **Competitive Programming Ready**: Optimized for coding competitions and interviews
- **Multiple Test Cases**: Built-in support for handling multiple test cases

## 📁 Project Structure

```
DSA/
├── dsa_template.h    # Core template with includes and I/O helpers
├── input.txt         # Input test cases (for local testing)
└── problems/         # Directory for all problem solutions
    ├── template.cpp  # Problem template (copy this for new problems)
    └── second_largest.cpp  # Example solution
```

## 🛠️ Setup Instructions

1. **Prerequisites**
   - C++ compiler (g++, clang, or MSVC)
   - C++11 or later

2. **Getting Started**
   - Clone this repository
   - Navigate to the project directory
   - Compile and run the example:
     ```bash
     cd problems
     g++ -std=c++11 second_largest.cpp -o second_largest
     .\second_largest
     ```

## 🧩 Creating a New Problem

1. **Copy the Template**
   ```bash
   cp problems/template.cpp problems/your_problem.cpp
   ```

2. **Implement Your Solution**
   - For class-based solutions (recommended for most platforms):
     ```cpp
     class Solution {
     public:
         // Your solution method
         int solve(vector<int>& nums) {
             // Your code here
         }
     };
     ```
   - For function-based solutions:
     ```cpp
     int solve(vector<int>& nums) {
         // Your code here
     }
     ```

## 🧪 Testing Your Solution

1. **Using the Built-in Test Cases**
   - The template includes a `main()` function with test cases
   - Add your test cases in the `main()` function
   - Example:
     ```cpp
     int main() {
         Solution sol;
         
         // Test case 1
         vector<int> test1 = {1, 2, 3, 4};
         cout << "Test 1: " << sol.solve(test1) << endl;
         
         // Test case 2
         vector<int> test2 = {5, 5, 5};
         cout << "Test 2: " << sol.solve(test2) << endl;
         
         return 0;
     }
     ```

2. **Running the Tests**
   ```bash
   # Compile
   g++ -std=c++11 your_problem.cpp -o solution
   
   # Run
   .\solution
   ```

## ⚡ I/O Helpers

The template provides these helper methods:

```cpp
// Reading input
int x = readInt();                    // Read a single integer
long long y = readLong();            // Read a 64-bit integer
string s = readString();             // Read a string (space/newline separated)
vector<int> arr = readIntArray();    // Read N followed by N integers
vector<vector<int>> mat = read2DIntArray();  // Read rows, cols, then rows*cols integers

// Writing output
printArray({1, 2, 3});  // Prints: 1 2 3
print2DArray({{1,2}, {3,4}});  // Prints: 1 2\n3 4
```

## 📝 Best Practices

1. **Problem Documentation**
   - Always include the problem statement at the top of your file
   - Document input/output format
   - Include constraints and examples

2. **Code Style**
   - Use meaningful variable names
   - Add comments for complex logic
   - Keep functions small and focused

3. **Testing**
   - Test edge cases (empty input, single element, etc.)
   - Test with maximum input sizes
   - Verify time and space complexity

## 🎯 Example: Second Largest Element

See `problems/second_largest.cpp` for a complete example solution that finds the second largest distinct element in an array.

## 🤝 Contributing

Feel free to contribute by adding more problems or improving the template. Make sure to follow the existing code style and include appropriate test cases.

3. **Testing**
   - Test edge cases (empty input, large inputs, etc.)
   - Use the sample test cases from the problem statement

## 🚀 Performance Tips

- Use `\n` instead of `endl` for faster output
- Prefer `vector` over arrays
- Use `unordered_map` when order doesn't matter
- Reserve vector capacity when size is known in advance

## 🤝 Contributing

1. Fork the repository
2. Create a new branch for your feature
3. Commit your changes
4. Push to the branch
5. Create a new Pull Request

## 📜 License

This project is open source and available under the MIT License.

## 🙏 Acknowledgments

- Standard Template Library (STL) documentation
- Competitive Programming resources
