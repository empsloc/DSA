#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printNumbers(int current, int n) {
        // Base case
        if (current > n)
            return;

        // Recursive call first
        printNumbers(current + 1, n);

        // Print after recursion (backtracking)
        cout << current << " ";
    }
};

int main() {
    Solution sol;
    int n = 5;

    sol.printNumbers(1, n);
    cout << "\n";

    return 0;
}
