class Solution {
public:
    int memo[46];
    int solveMemo(int n) {
        if (n <= 1) return 1;
        if (memo[n] != -1) return memo[n];
        return memo[n] = solveMemo(n - 1) + solveMemo(n - 2);
    }
public:
    int climbStairs(int n) {
        std::fill(memo, memo + 46, -1);
        return solveMemo(n);
    }
};