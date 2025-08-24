# DSA Problem Solutions

This repository contains solutions to Data Structures and Algorithms problems in LeetCode/GFG style. Each problem is self-contained with a solution that can be directly submitted to coding platforms.

## Directory Structure

```
problems/
├── template/               # Template for new problems
│   └── solution.cpp       # Solution template (LeetCode/GFG style)
├── 1. second_largest/     # Example problem
│   └── solution.cpp      # Solution implementation
└── README.md             # This file
```

## How to Use

1. **Create a New Problem**
   ```bash
   # Create a new directory for your problem
   mkdir "N.problem_name"
   cd "N.problem_name"
   # Copy the template
   cp ../template/solution.cpp .
   ```

2. **Implement Your Solution**
   - Edit `solution.cpp`
   - Implement the required function(s)
   - Add problem statement and examples in comments

3. **Testing**
   - Test your solution directly on LeetCode/GFG
   - For local testing, you can add a `main()` function temporarily

## Solution Template

```cpp
/**
 * Problem: [Problem Name]
 * Source: [LeetCode/GFG]
 * Difficulty: [Easy/Medium/Hard]
 * 
 * Problem Statement:
 * [Brief description of the problem]
 * 
 * Example 1:
 * Input: [sample input]
 * Output: [expected output]
 * 
 * Constraints:
 * - [constraint 1]
 * - [constraint 2]
 */

class Solution {
public:
    // Your solution function here
    // Example:
    // int functionName(parameters) {
    //     // Your code here
    //     return result;
    // }
};
```

## Best Practices

1. **Code Style**
   - Follow consistent naming conventions
   - Add comments for complex logic
   - Keep solutions clean and readable

2. **Documentation**
   - Include problem statement in comments
   - Add time and space complexity analysis
   - Document edge cases and assumptions

3. **Testing**
   - Test with edge cases
   - Verify against sample inputs
   - Check for boundary conditions

## Contributing

1. Each problem should be in its own directory
2. Follow the naming convention: `N.problem_name`
3. Include problem statement in comments
4. Ensure solution is optimal and well-documented
