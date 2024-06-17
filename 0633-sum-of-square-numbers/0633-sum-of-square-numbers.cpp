class Solution {
public:
   bool solve(int c, int l, int r) {
    while (l <= r) {
        int mid = l*l + r*r;
        if (mid == c) {
            return true;
        }
        if (mid > c) {
            r = r - 1;
        } else {
            l = l + 1;
        }
    }
    return false;
}
   bool judgeSquareSum(int c) {
    for (long long i = 0; i * i <= c; ++i) {
        double j = sqrt(c - i * i);
        if (j == (int)j) {
            return true;
        }
    }
    return false;}
};