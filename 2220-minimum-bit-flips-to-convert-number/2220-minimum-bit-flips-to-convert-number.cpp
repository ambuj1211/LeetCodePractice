class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flip = 0;

        for (int i = 0; i < 32; i++) {
            flip += ((start & (1 << i)) != (goal & (1 << i)));
        }

        return flip;
    }
};