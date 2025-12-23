#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to reverse the array
    void reverseArray(vector<int>& arr, int p1, int p2) {
        // Base case: pointers cross or meet
        if (p1 >= p2)
            return;

        // Swap elements
        swap(arr[p1], arr[p2]);

        // Recursive call with updated pointers
        reverseArray(arr, p1 + 1, p2 - 1);
    }
};

// Driver code
int main() {
    Solution sol;

    vector<int> arr = {1, 2, 3, 4, 5};

    // Initial call
    sol.reverseArray(arr, 0, arr.size() - 1);

    // Print reversed array
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
