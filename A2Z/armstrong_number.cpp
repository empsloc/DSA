class Solution {
public:
    bool isArmstrong(int n) {
        int original = n;
        int digits = 0;

        // Count digits
        int temp = n;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        long long sum = 0;
        temp = n;

        // Calculate sum of digits^digits
        while (temp > 0) {
            int digit = temp % 10;
            long long power = 1;

            // compute digit^digits
            for (int i = 0; i < digits; i++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        return sum == original;
    }
};
